## Parcing files for printable characters including the Russian ones

Sometimes you need to parse a binary file for printable characters. Or you have some strange mix of encodings as output.

And, for example, the command 'strings' in Linux ignores the Russian alphabet. I made a script that uses KOI-8 encoding on fly to get the 1-byte characters between, and it works from a command line in Linux like this:

*cat Your_Binary_File_With_Unicode_Characters | iconv -c -f utf-8 -t koi8-r > test_s.bin ; ./Parsing_files_for_printable_characters_including_Russian_alphabet | iconv -c -f koi8-r -t utf-8 | less*

The code takes the input data from the file **test_s.bin**

And sure you can play with the code using ASCII table to add more punctuation marks or anything else.
 
The way of usage looks a little bit ugly but it does help when you need printable characters only.

Let's make it clear! It works perfectly when you need no more any another symbols, especially the invisible ones.
