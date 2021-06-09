func int sum(int x, int y)
{
  return x + y;
}

func void  main()
{
  int a = sum(10, 20);
  a = sum(a, a);
}