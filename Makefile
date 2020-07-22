pars_only_ru: Parsing_files_for_printable_characters_including_Russian_alphabet.c
	echo -n '1' > /home/a2/.jenkins/jobs/C2/a.txt
	gcc Parsing_files_for_printable_characters_including_Russian_alphabet.c -o pars_only_ru > /home/a2/.jenkins/jobs/C2/ren.log 2> /home/a2/.jenkins/jobs/C2/ren2.log && echo -n '0' > /home/a2/.jenkins/jobs/C2/a.txt
# stop. hummer time. 10050112
