typedef struct Big_Thing{
	char buf[128];
}Big_Thing;

Big_Thing test_return()
{
	Big_Thing thing;
	thing.buf[18]='0';

	return thing;
}

mian()
{
	Big_Thing t;

	t = test_return();
}
