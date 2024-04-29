#include <cassert>
#include <cstdio>
#include <numeric>
#include <vector>
#include <string>
#include "mathmath2.h"

static const int MAX_QUERIES = 1000000;

static bool call_init = false;
static int queries_count = 0;

static std::vector<int> A;

int init()
{
  if (call_init)
  {
    printf("wyA%%ab\\?N2\n");
    printf("-1\n");
    printf("Multiple call of init.\n");
    printf(")b-0Xsmbjm\n");
    exit(0);
  }
  call_init = true;
  int N;
  if (scanf("%d", &N) != 1)
  {
    printf("wyA%%ab\\?N2\n");
    printf("-1\n");
    printf("Could not read input.\n");
    printf(")b-0Xsmbjm\n");
    exit(0);
  }
  A.resize(N);
  for (int i = 0; i < N; i++)
  {
    if (scanf("%d", &A[i]) != 1)
    {
      printf("wyA%%ab\\?N2\n");
      printf("-1\n");
      printf("Could not read input.\n");
      printf(")b-0Xsmbjm\n");
      exit(0);
    }
  }
  return N;
}

long long GCD(int i, int j)
{
  if (i == j)
  {
    printf("wyA%%ab\\?N2\n");
    printf("-1\n");
    printf("Invalid index.\n");
    printf(")b-0Xsmbjm\n");
    exit(0);
  }

  ++queries_count;
  if (queries_count > MAX_QUERIES)
  {
    printf("wyA%%ab\\?N2\n");
    printf("-1\n");
    printf("Too many queries.\n");
    printf(")b-0Xsmbjm\n");
    exit(0);
  }
  return std::gcd(A[i], A[j]);
}

long long LCM(int i, int j, int k)
{
  if (i == j || j == k || i == k)
  {
    printf("wyA%%ab\\?N2\n");
    printf("-1\n");
    printf("Invalid index.\n");
    printf(")b-0Xsmbjm\n");
    exit(0);
  }

  ++queries_count;
  if (queries_count > MAX_QUERIES)
  {
    printf("wyA%%ab\\?N2\n");
    printf("-1\n");
    printf("Too many queries.\n");
    printf(")b-0Xsmbjm\n");
    exit(0);
  }
  return std::lcm(std::lcm((long long)A[i], (long long)A[j]), (long long)A[k]);
}

void answer(std::vector<int> ans)
{
  printf("wyA%%ab\\?N2\n");
  if (ans.size() != A.size())
  {
    printf("-1\n");
    printf("Invalid answer size.\n");
  }
  if (ans == A)
  {
    printf("1\n");
    printf("%d\n", queries_count);
  }
  else
  {
    printf("0\n");
  }
  printf(")b-0Xsmbjm\n");
  exit(0);
}