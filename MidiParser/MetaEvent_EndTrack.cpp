# include "stdafx.h"
# include "MetaEvent_EndTrack.h"
# include "IFileParser.h"

void MetaEvent_EndTrack::Read_impl()
{
	assert("SOMETHING IS WRONG IN PROGRAM ARITHMETICS" && 1 == GetInputFile()->GetBytesRemained());
	if (GetInputFile()->ReadByte()) WARNING("Corrupted MIDI's end of track");
}