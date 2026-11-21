struct Point {
	int x;
	int y;
};

volatile int g_x;
volatile int g_y;

__attribute__((noinline)) int print_point(struct Point *p)
{
	g_x = p->x;
	g_y = p->y;
	return g_x + g_y;
}

int main(void)
{
	struct Point pt = { 10, 20 };
	print_point(&pt);
	return 0;
}
