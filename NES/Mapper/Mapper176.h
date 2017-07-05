class	Mapper176 : public Mapper
{
public:
	Mapper176( NES* parent ) : Mapper(parent) {}

	
	void	Reset();
	void	WriteLow( WORD addr, BYTE data );

	// For state save
	BOOL	IsStateSave() { return TRUE; }
	void	SaveState( LPBYTE p ){}
	void	LoadState( LPBYTE p ){}

protected:
	BYTE prg,chr;
	void Sync();
};

