#ifndef NIFTY_STRUCTS_TEST
#define NIFTY_STRUCTS_TEST

struct s1 {
  int f1;
  char f2;
  char* f3;
  char f4[10];
};

struct s2 {
  struct s1;
  struct *s1;
};

struct s3 {
  struct s2;
  struct s1;
};

/* No functions */

#endif /* NIFTY_STRUCTS_TEST */