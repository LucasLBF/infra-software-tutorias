bin: atividade1.c ps_script.c
	gcc $< -o $@
	
.PHONY: run clean

run:
	./bin & ./ps_script

clean:
	rm bin && rm ps_script
