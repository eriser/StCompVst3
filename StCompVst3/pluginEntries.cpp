
#include "public.sdk\source\main\pluginfactoryvst3.h"
#include "Version.h"
#include "vst3ids.h"
#include "AudioCompressorProcessor.h"

bool InitModule() { return true; }
bool DeinitModule() { return true; }

using namespace Steinberg::Vst;

BEGIN_FACTORY_DEF(VENDOR_STR, URL_STR, EMAIL_STR)

DEF_CLASS2(
	INLINE_UID_FROM_FUID(AudioCompressorProcessorID),
	PClassInfo::kManyInstances,
	kVstAudioEffectClass,
	VSTNAME_STR,
	Vst::kDistributable,
	SUBCATEGORIES_STR,
	VERSION_STR,
	kVstVersionString,
	Steinberg::Vst::StComp::AudioCompressorProcessor::createInstrance)

END_FACTORY

