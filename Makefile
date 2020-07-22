pars_only_ru: Parsing_files_for_printable_characters_including_Russian_alphabet.c
	gcc Parsing_files_for_printable_characters_including_Russian_alphabet.c -o pars_only_ru &> ren.log
	a=$?
	echo "Path is $(pwd)"
	./ren.sh "${a}" ren.log
# stop. hummer time. 2
