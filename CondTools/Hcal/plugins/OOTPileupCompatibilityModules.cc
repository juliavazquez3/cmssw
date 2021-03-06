#include "CondTools/Hcal/interface/BufferedBoostIOESProducer.h"
#include "CondFormats/DataRecord/interface/HcalOOTPileupCompatibilityRcd.h"
#include "CondFormats/HcalObjects/interface/OOTPileupCorrectionColl.h"

typedef BufferedBoostIOESProducer<OOTPileupCorrectionColl, HcalOOTPileupCompatibilityRcd>
    OOTPileupDBCompatibilityESProducer;

DEFINE_FWK_EVENTSETUP_MODULE(OOTPileupDBCompatibilityESProducer);
