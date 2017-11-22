n = int(input())

a = list(map(int, input().split()))
b = list(map(int, input().split()))

cola_total = sum(a)
espacios_ordenados = sorted(b)

espace_max = espacios_ordenados[-1] + espacios_ordenados[-2]

if(cola_total <= espace_max):
	print("YES")
else :
	print("NO")
