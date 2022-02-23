all: atividade1 ps_script

bin: atividade1.c
	gcc $< -o $@

script: ps_script.c
	gcc $< -o $@

.PHONY: run clean

run:
	./atividade1 & ./ps_script

clean:
	rm atividade1 && rm ps_script

