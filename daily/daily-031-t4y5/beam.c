int	beam_dose(int high_power, int spreader_in)
{
	if (high_power && !spreader_in)
		return (0);
	return (200);
}
