//////////////////////////////////////////////////////////////////////////
// Mapper176                                                            //
//////////////////////////////////////////////////////////////////////////
void	Mapper176::Reset()
{
	prg=~0;
	chr=0;
	Sync();
}

void Mapper176::Sync()
{
  //setprg8r(0x10,0x6000,0);
  SetPROM_32K_Bank(prg>>1);
  SetVROM_8K_Bank(chr);
}

void	Mapper176::WriteLow( WORD addr, BYTE data )
{
	switch( addr ) {
		case 0x5ff1:
			prg = data;	Sync();
			 break;
		case 0x5ff2:
			chr = data;	Sync();
			 break;
		default:
			 break;
			 }
	if( addr>=0x6000 ) {
		CPU_MEM_BANK[addr>>13][addr&0x1FFF] = data;
	}
}
