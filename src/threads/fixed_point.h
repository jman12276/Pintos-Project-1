#define f 2**14

// x and y denote fixed_point numbers in 17.14 format
// n is an integer

int int_to_fixed_point(int n)
{
  return n * f;
}

int fixed_point_to_int(int x)
{
  return x / f;
}

int add_fixed_point(int x, int y)
{
  return x + y;
}

int sub_fixed_point(int x, int y)
{
  return x - y;
}

int add_mixed(int x, int n)
{
  return x + int_to_fixed_point(n);
}

int sub_mixed(int x, int n)
{
  return x - int_to_fixed_point(n);
}

int mult_fixed_point(int x, int n)
{
  return ((int64_t) x) * y / f;
}

int mult_mixed(int x, int n)
{
  return x * n;
}

int div_fixed_point(int x, int y)
{
  return ((int64_t) x) * f / y;
}

int div_mixed(int x, int n)
{
  return x / n;
}
