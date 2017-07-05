//////////////////////////////////////////////////////////////////////////
// Mapper035                                                            //
//////////////////////////////////////////////////////////////////////////
class	Mapper035 : public Mapper
{
public:
	Mapper035( NES* parent ) : Mapper(parent) {}

	void	Reset();
	void	WriteLow( WORD addr, BYTE data );
	BYTE	ReadLow ( WORD addr );
	void	Write( WORD addr, BYTE data );
	void	HSync( INT scanline );
	void	Sync(void);

protected:
private:
	BYTE reg[8], chr[8];
	WORD IRQCount, IRQa;
};
