texto = input()
cont = 0;

for i in range (0, len(texto) - 2, 1):
	if(texto[i] == 'Q'):
		for j in range (i+1, len(texto) - 1, 1):
			if(texto[j] == 'A'):
				for k in range (j+1, len(texto), 1):
					if(texto[k] == 'Q'):
						cont = cont + 1

print(cont)
