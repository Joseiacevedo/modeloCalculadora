/*
 ============================================================================
 Name        : MenuOpciones.c
 Author      : Jose Acevedo
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
int MenuOpciones()
{
		printf("1. Alta\n");
		printf("2. Baja\n");
		printf("3. Modificar\n");
		printf("4. Salir\n");
		printf("Elija una opcion: ");
		scanf("%d", &opcion);
		switch (opcion)
			{
				case 1:
					printf("Estoy dando de alta\n");
					break;
				case 2:
					printf("Estoy dando de baja\n");
					break;
				case 3:
					printf("Estoy modificando\n");
					break;
			}
		} while (opcion!=4);

		return EXIT_SUCCESS;
	}