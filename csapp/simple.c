int simple(int *xp, int y)
{
	int t = *xp + y;
	*xp = y;
	return t;
}
