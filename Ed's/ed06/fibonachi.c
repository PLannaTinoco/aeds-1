int fib (int n){
    if (n == 0 || n == 1)
    {
        return 1;
    } else
    {
        return(fib(n-1)+fib(n-2));
    }
}    
 void parfib(int n){
 int i = 1;
 int j = 1;
 int soma = 0;
while (i <= n)
{
    if (fib(j) % 2 == 0)
    {
        printf("%d par da sequencia = %d \n", i, fib(j));
        soma = soma + fib(j);
        i++;
    }
    j++;
}

 }   

int main()
{
    printf("%i\n", fib(5));
    parfib(3);
    return 0;
}
