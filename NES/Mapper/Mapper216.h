//////////////////////////////////////////////////////////////////////////
// Mapper216                                                            //
//////////////////////////////////////////////////////////////////////////
class	Mapper216 : public Mapper
{
public:
	Mapper216( NES* parent ) : Mapper(parent) {}

	void	Reset();
	void	Write( WORD addr, BYTE data );

protected:
private:
};
