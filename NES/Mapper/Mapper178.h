class	Mapper178 : public Mapper
{
public:
	Mapper178( NES* parent ) : Mapper(parent) {}

	
	void	Reset();
	void	Write( WORD addr, BYTE data );
	void	WriteLow( WORD addr, BYTE data );

	// For state save
	BOOL	IsStateSave() { return TRUE; }
	void	SaveState( LPBYTE p ){}
	void	LoadState( LPBYTE p ){}

protected:
	BYTE	reg[3];
	BYTE	banknum;

	
	void	SetBank_CPU();
};