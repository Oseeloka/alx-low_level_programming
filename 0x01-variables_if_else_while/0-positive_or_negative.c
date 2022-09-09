srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
	printf("is positive\n");
	printf("%d is positive\n", n);
}
else if (n == 0)
{
	printf("is zero\n");
	printf("%d is zero\n", n);
else
{
	printf("is negative\n");
	printf("%d is negative\n", n);
	return (0);
}
