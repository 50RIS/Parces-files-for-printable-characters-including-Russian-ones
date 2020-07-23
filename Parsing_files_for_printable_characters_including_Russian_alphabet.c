/* gcc -o the_compiled_binary_name Parsing_files_for_printable_characters_including_Russian_alphabet.c # How to compile manually ! ! !!! */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <string.h>

int main(void) {
FILE *f = fopen("test_s.bin", "rb");
fseek(f, 0, SEEK_END);
long fsize = ftell(f);
fseek(f, 0, SEEK_SET);

//printf("%lu",fsize);

unsigned char *string = malloc(fsize + 1);
fread(string, fsize, 1, f);

//unsigned int len = strlen ( string );
int j; char t[2];

        for( j = 0 ; j < fsize; j++) {
		//printf("printf: %x\n",argv[1][j]);
		sprintf(t, "%x", string[j]);
		//puts(t);
		if (strcmp(t, "30") == 0 || strcmp(t, "31") == 0 || strcmp(t, "32") == 0 || strcmp(t, "33") == 0 || strcmp(t, "34") == 0 || strcmp(t, "35") == 0 || strcmp(t, "36") == 0 || strcmp(t, "37") == 0 || strcmp(t, "38") == 0 || strcmp(t, "39") == 0 || strcmp(t, "61") == 0 || strcmp(t, "62") == 0 || strcmp(t, "63") == 0 || strcmp(t, "64") == 0 || strcmp(t, "65") == 0 || strcmp(t, "66") == 0 || strcmp(t, "67") == 0 || strcmp(t, "68") == 0 || strcmp(t, "69") == 0 || strcmp(t, "6a") == 0 || strcmp(t, "6b") == 0 || strcmp(t, "6c") == 0 || strcmp(t, "6d") == 0 || strcmp(t, "6e") == 0 || strcmp(t, "6f") == 0 || strcmp(t, "70") == 0 || strcmp(t, "71") == 0 || strcmp(t, "72") == 0 || strcmp(t, "73") == 0 || strcmp(t, "74") == 0 || strcmp(t, "75") == 0 || strcmp(t, "76") == 0 || strcmp(t, "77") == 0 || strcmp(t, "78") == 0 || strcmp(t, "79") == 0 || strcmp(t, "7a") == 0 || strcmp(t, "41") == 0 || strcmp(t, "42") == 0 || strcmp(t, "43") == 0 || strcmp(t, "44") == 0 || strcmp(t, "45") == 0 || strcmp(t, "46") == 0 || strcmp(t, "47") == 0 || strcmp(t, "48") == 0 || strcmp(t, "49") == 0 || strcmp(t, "4a") == 0 || strcmp(t, "4b") == 0 || strcmp(t, "4c") == 0 || strcmp(t, "4d") == 0 || strcmp(t, "4e") == 0 || strcmp(t, "4f") == 0 || strcmp(t, "50") == 0 || strcmp(t, "51") == 0 || strcmp(t, "52") == 0 || strcmp(t, "53") == 0 || strcmp(t, "54") == 0 || strcmp(t, "55") == 0 || strcmp(t, "56") == 0 || strcmp(t, "57") == 0 || strcmp(t, "58") == 0 || strcmp(t, "59") == 0 || strcmp(t, "5a") == 0 || strcmp(t, "5f") == 0 || strcmp(t, "2e") == 0 || strcmp(t, "20") == 0 || strcmp(t, "2d") == 0 || strcmp(t, "0a") == 0 || strcmp(t, "c0") == 0 || strcmp(t, "c1") == 0 || strcmp(t, "c2") == 0 || strcmp(t, "c3") == 0 || strcmp(t, "c4") == 0 || strcmp(t, "c5") == 0 || strcmp(t, "c6") == 0 || strcmp(t, "c7") == 0 || strcmp(t, "c8") == 0 || strcmp(t, "c9") == 0 || strcmp(t, "ca") == 0 || strcmp(t, "cb") == 0 || strcmp(t, "cc") == 0 || strcmp(t, "cd") == 0 || strcmp(t, "ce") == 0 || strcmp(t, "cf") == 0 || strcmp(t, "d0") == 0 || strcmp(t, "d1") == 0 || strcmp(t, "d2") == 0 || strcmp(t, "d3") == 0 || strcmp(t, "d4") == 0 || strcmp(t, "d5") == 0 || strcmp(t, "d6") == 0 || strcmp(t, "d7") == 0 || strcmp(t, "d8") == 0 || strcmp(t, "d9") == 0 || strcmp(t, "da") == 0 || strcmp(t, "db") == 0 || strcmp(t, "dc") == 0 || strcmp(t, "dd") == 0 || strcmp(t, "de") == 0 || strcmp(t, "df") == 0 || strcmp(t, "b3") == 0 || strcmp(t, "a3") == 0 || strcmp(t, "e0") == 0 || strcmp(t, "e1") == 0 || strcmp(t, "e2") == 0 || strcmp(t, "e3") == 0 || strcmp(t, "e4") == 0 || strcmp(t, "e5") == 0 || strcmp(t, "e6") == 0 || strcmp(t, "e7") == 0 || strcmp(t, "e8") == 0 || strcmp(t, "e9") == 0 || strcmp(t, "ea") == 0 || strcmp(t, "eb") == 0 || strcmp(t, "ec") == 0 || strcmp(t, "ed") == 0 || strcmp(t, "ee") == 0 || strcmp(t, "ef") == 0 || strcmp(t, "f0") == 0 || strcmp(t, "f1") == 0 || strcmp(t, "f2") == 0 || strcmp(t, "f3") == 0 || strcmp(t, "f4") == 0 || strcmp(t, "f5") == 0 || strcmp(t, "f6") == 0 || strcmp(t, "f7") == 0 || strcmp(t, "f8") == 0 || strcmp(t, "f9") == 0 || strcmp(t, "fa") == 0 || strcmp(t, "fb") == 0 || strcmp(t, "fc") == 0 || strcmp(t, "fd") == 0 || strcmp(t, "fe") == 0 || strcmp(t, "ff") == 0) { printf("%c", string[j]); } else { printf("%c", ' '); }
		}

fclose(f);

string[fsize] = 0;
}

// The code allows 0-9a-zA-Z_. -A-Яа-я now.

// To check out the KOI8-R code for a character:
// echo -n 'a character' | iconv -c -f utf-8 -t koi8-r | hexdump -C

// The ranges of KOI8-R are:
// а-я are in the range: c0-df,
// А-Я: e0-ff,
// Ё,ё: b3,a3,
// 0-9: 30-39,
// a-z: 61-7a,
// A-Z: 41-5a,
// 'The bell' which is absent here: 07,
// <> are 3c and 3e; '!' is 21; ':' is 3a; \/ are 5c and 2f; '-' is 2d,
// blank space: 20 (present); carrige return: 0a
// and the '.' is 2e
