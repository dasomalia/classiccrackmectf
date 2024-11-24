#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define CHAR_COUNT 51

char output_chars[CHAR_COUNT] = {
    'm', 'p', 'k', 'n', 'n', 'p', 'h', 'j', 'n', 'g',
    'b', 'h', 'g', 'z', 'y', 'd', 't', 't', 'v', 'k',
    'a', 'h', 'p', 'p', 'e', 'v', 'h', 'k', 'm', 'p',
    'w', 'g', 'd', 'z', 'x', 's', 'y', 'k', 'k', 'o',
    'k', 'r', 'i', 'e', 'p', 'f', 'n', 'r', 'd', 'm'
};

unsigned int compute_uVar1(int i_1) {
	int uVar1 = ((i_1 >> 1) & 0x55) + (i_1 & 0x55);
	uVar1 = ((uVar1 >> 2) & 0x33) + (uVar1 & 0x33);

	return uVar1;

}


char transform_char_once(char input_char, int i_1) {
	unsigned int uVar1 = compute_uVar1(i_1);
	int iVar2 = (uVar1 >> 4) + (input_char - 'a') + (uVar1 & 0xF);
	iVar2 = iVar2 % 26;
	char output_char = (char)(iVar2 + 'a');
	return output_char;

}

void reverse_transform_char(char output_char, int i_1, char* possible_input) {
	for(int c = 'a'; c <= 'z'; c++) {
		char input_char = (char)c;
		char transformed_char = input_char;

		for(int j = 0; j < 3; j++) {
			transformed_char = transform_char_once(transformed_char, i_1);
		}
		if(transformed_char == output_char) {
			*possible_input = input_char;
			return;
		}
	}
}


int main() {
	char password_chars[CHAR_COUNT];
	char password[CHAR_COUNT];

	memset(password_chars, 0, sizeof(password_chars));

	for(int i_1 = 0; i_1 < strlen(output_chars); i_1++) {
		char possible_input;
		reverse_transform_char(output_chars[i_1], i_1, &possible_input);
		password_chars[i_1] = possible_input;
	}

	strcpy(password, password_chars);

	printf("a senha é: %s\n", password);

	return 0;

}
