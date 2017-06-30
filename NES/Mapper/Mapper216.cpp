//////////////////////////////////////////////////////////////////////////
// Mapper216                                                            //
//////////////////////////////////////////////////////////////////////////
void	Mapper216::Reset()
{
	SetVROM_8K_Bank(0);
	SetPROM_32K_Bank(0);
}

void	Mapper216::Write( WORD addr, BYTE data )
{
	SetVROM_8K_Bank((addr&0x0E)>>1);
	SetPROM_32K_Bank(addr&1);
}
