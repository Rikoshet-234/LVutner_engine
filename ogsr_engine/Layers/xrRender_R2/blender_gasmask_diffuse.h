#pragma once


class CBlender_gasmask_diffuse : public IBlender
{
public:
	virtual		LPCSTR		getComment() { return "Gasmask_diffuse"; }
	virtual		BOOL		canBeDetailed() { return FALSE; }
	virtual		BOOL		canBeLMAPped() { return FALSE; }

	virtual		void		Compile(CBlender_Compile& C);

	CBlender_gasmask_diffuse();
	virtual ~CBlender_gasmask_diffuse();
};