EXEC = gcc
CFLAGS = -std=c99 -fstack-protector-all -g
PROJ_NAME = ted

clear:
	rm -f *.o
	rm -f $(PROJ_NAME)

	$(PROJ_NAME): main.o circulo.o retangulo.o linha.o  qry.o svg.o paths.o
		$(EXEC) $(CFLAGS) main.o circulo.o retangulo.o linha.o qry.o svg.o paths.o -o $(PROJ_NAME) -lm

	main.o: main.c
	$(EXEC) $(CFLAGS) -c main.c

	circulo.o: circulo.c				#compilação do circulo
	$(EXEC) $(CFLAGS) -c circulo.c

	retangulo.o: retangulo.c 			#compilação do retangulo
	$(EXEC) $(CFLAGS) -c retangulo.c

	linha.o: linha.c					#compilação da linha
	$(EXEC) $(CFLAGS) -c linha.c

	qry.o: qry.c						#compilação do qry
	$(EXEC) $(CFLAGS) -c qry.c

	svg.o: svg.c						#compilação do svg
	$(EXEC) $(CFLAGS) -c svg.c

	paths.o: paths.c					#compilação do paths
	$(EXEC) $(CFLAGS) -c paths.c