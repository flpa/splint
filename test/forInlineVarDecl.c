/**
 * Verifies definition of a variable in the header is supported and that the
 * variable is available in the loop body.
 */
static void definition() 
{
  for(int i = 0; i < 10; i++) {
    i *= 2;
  }
}

/**
 * Verifies declaration of a variable in the header is supported.
 */
static void declaration() 
{
  int a = 1;
  for(int i; a < 4; a++) {
    i = a;
  }
}

/**
 * Verifies declaration/definition of multiple variables is supported.
 */
static void declarationAndDefinition()
{
  for(int i, j = 0; j < 4; j++) {
	  i = j;
  }
}

int main()
{
  definition();
  declaration();
  declarationAndDefinition();

  return 0; 
}
