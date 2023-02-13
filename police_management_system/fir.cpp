#include "fir.h"

FIR::FIR()
{

}
FIR::FIR(QString fid, QString cid, QString pid, QString det, QString stat, QString ts)
            : firID(fid), complaintID(cid), policeStationID(pid), details(det), status(stat), timestamp(ts) {

}
