unsigned char reverse_bits(unsigned char byte)
{
char res = 0;	
int i = 8;
while (i > 0)
{
    res <<= 1;
    res |= byte & 1;
    byte >>= 1;
	i--;
}
	return (res);
}
