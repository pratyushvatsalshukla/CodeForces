t = int(input())

for _ in range(t):

	n,k = map(int,input().split(" "))



	ans = 0

	while(n > 0):

		ans += n%k

		n = n//k

		if(n>0):
			ans += 1



	print(ans)
