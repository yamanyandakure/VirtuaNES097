//////////////////////////////////////////////////////////////////////////
// Mapper178  Education / WaiXing / HengGe                              //
//////////////////////////////////////////////////////////////////////////
void    Mapper178::Reset()
{
	reg[0]=0;
	reg[1]=0;
	reg[2]=0;
	banknum=0;
	SetBank_CPU();
}

void	Mapper178::WriteLow( WORD addr, BYTE data )
{
	if (addr == 0x4800) {
		if (data & 0x01) SetVRAM_Mirror(VRAM_HMIRROR);
		else			  SetVRAM_Mirror(VRAM_VMIRROR);
	}
	else if (addr == 0x4801) {
		reg[0] = (data >> 1) & 0x0f;
		SetBank_CPU();
	}
	else if (addr == 0x4802) {
		reg[1] = (data << 2) & 0x0f;
		//			SetBank_CPU();
	}
	else if (addr == 0x4803) {
		//unknown
	}
	else if (addr >= 0x6000) {
		CPU_MEM_BANK[addr >> 13][addr & 0x1FFF] = data;
	}
}

void	Mapper178::Write( WORD addr, BYTE data )
{
//		SetPROM_32K_Bank( data );
}

void	Mapper178::SetBank_CPU()
{
		banknum=(reg[0]+reg[1]) & 0x0f;
		SetPROM_32K_Bank( banknum );
}