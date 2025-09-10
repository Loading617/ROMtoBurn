#ifndef _ROMtoBurn_ROMtoBurn_h
#define _ROMtoBurn_ROMtoBurn_h

#include <CtrlLib/CtrlLib.h>

using namespace Upp;

#define LAYOUTFILE <ROMtoBurn/ROMtoBurn.lay>
#include <CtrlCore/lay.h>

class ROMtoBurn : public WithROMtoBurnLayout<TopWindow> {
public:
	ROMtoBurn();
};

#endif
