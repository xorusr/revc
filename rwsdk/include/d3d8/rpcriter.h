#ifdef DOXYGEN
#include "doxygen.h"
#endif /* DOXYGEN */

/* These are plugins */
#define rwID_METRICSPLUGIN   MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x01)
#define rwID_SPLINEPLUGIN    MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x02)
#define rwID_STEREOPLUGIN    MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x03)
#define rwID_VRMLPLUGIN      MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x04)
#define rwID_MORPHPLUGIN     MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x05)
#define rwID_PVSPLUGIN       MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x06)
#define rwID_MEMLEAKPLUGIN   MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x07)
#define rwID_ANIMPLUGIN      MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x08)
#define rwID_GLOSSPLUGIN     MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x09)
#define rwID_LOGOPLUGIN      MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x0a)
#define rwID_MEMINFOPLUGIN   MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x0b)
#define rwID_RANDOMPLUGIN    MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x0c)
#define rwID_PNGIMAGEPLUGIN  MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x0d)
#define rwID_BONEPLUGIN      MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x0e)
#define rwID_VRMLANIMPLUGIN  MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x0f)
#define rwID_SKYMIPMAPVAL    MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x10)
#define rwID_MRMPLUGIN       MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x11)
#define rwID_LODATMPLUGIN    MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x12)
#define rwID_MEPLUGIN        MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x13)
#define rwID_LTMAPPLUGIN     MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x14)
#define rwID_REFINEPLUGIN    MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x15)
#define rwID_SKINPLUGIN      MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x16)
#define rwID_LABELPLUGIN     MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x17)
#define rwID_PARTICLESPLUGIN MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x18)
#define rwID_GEOMTXPLUGIN    MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x19)
#define rwID_SYNTHCOREPLUGIN MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x1a)
#define rwID_STQPPPLUGIN     MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x1b)
#define rwID_PARTPPPLUGIN    MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x1c)
#define rwID_COLLISPLUGIN    MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x1d)
#define rwID_HANIMPLUGIN     MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x1e)
#define rwID_USERDATAPLUGIN  MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x1f)
#define rwID_MATERIALEFFECTSPLUGIN \
                             MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x20)
#define rwID_PARTICLESYSTEMPLUGIN \
                             MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x21)
#define rwID_DMORPHPLUGIN    MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x22)
#define rwID_PATCHPLUGIN     MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x23)
#define rwID_TEAMPLUGIN      MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x24)
#define rwID_CROWDPPPLUGIN   MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x25)
#define rwID_MIPSPLITPLUGIN  MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x26)
#define rwID_ANISOTPLUGIN    MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x27)
/* #define THIS SPACE FREE!     MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x28) */
#define rwID_GCNMATPLUGIN    MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x29)
#define rwID_GPVSPLUGIN      MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x2a)
#define rwID_XBOXMATPLUGIN   MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x2b)
#define rwID_MULTITEXPLUGIN  MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x2c)
#define rwID_CHAINPLUGIN     MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x2d)
#define rwID_TOONPLUGIN      MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x2e)
#define rwID_PTANKPLUGIN     MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x2f)
#define rwID_PRTSTDPLUGIN    MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x30)
#define rwID_PDSPLUGIN       MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x31)
#define rwID_PRTADVPLUGIN    MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x32)

/* These are toolkits */
#define rwID_CHARSEPLUGIN      MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x80)
#define rwID_NOHSWORLDPLUGIN   MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x81)
#define rwID_IMPUTILPLUGIN     MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x82)
#define rwID_SLERPPLUGIN       MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x83)
#define rwID_OPTIMPLUGIN       MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x84)
#define rwID_TLWORLDPLUGIN     MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x85)
#define rwID_DATABASEPLUGIN    MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x86)
#define rwID_RAYTRACEPLUGIN    MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x87)
#define rwID_RAYPLUGIN         MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x88)
#define rwID_LIBRARYPLUGIN     MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x89)
#define rwID_2DPLUGIN          MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x90)
#define rwID_TILERENDPLUGIN    MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x91)
#define rwID_JPEGIMAGEPLUGIN   MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x92)
#define rwID_TGAIMAGEPLUGIN    MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x93)
#define rwID_GIFIMAGEPLUGIN    MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x94)
#define rwID_QUATPLUGIN        MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x95)
#define rwID_SPLINEPVSPLUGIN   MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x96)
#define rwID_MIPMAPPLUGIN      MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x97)
#define rwID_MIPMAPKPLUGIN     MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x98)
#define rwID_2DFONT            MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x99)
#define rwID_INTSECPLUGIN      MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x9a)
#define rwID_TIFFIMAGEPLUGIN   MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x9b)
#define rwID_PICKPLUGIN        MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x9c)
#define rwID_BMPIMAGEPLUGIN    MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x9d)
#define rwID_RASIMAGEPLUGIN    MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x9e)
#define rwID_SKINFXPLUGIN      MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x9f)
#define rwID_VCATPLUGIN        MAKECHUNKID(rwVENDORID_CRITERIONTK, 0xa0)
#define rwID_2DPATH            MAKECHUNKID(rwVENDORID_CRITERIONTK, 0xa1)
#define rwID_2DBRUSH           MAKECHUNKID(rwVENDORID_CRITERIONTK, 0xa2)
#define rwID_2DOBJECT          MAKECHUNKID(rwVENDORID_CRITERIONTK, 0xa3)
#define rwID_2DSHAPE           MAKECHUNKID(rwVENDORID_CRITERIONTK, 0xa4)
#define rwID_2DSCENE           MAKECHUNKID(rwVENDORID_CRITERIONTK, 0xa5)
#define rwID_2DPICKREGION      MAKECHUNKID(rwVENDORID_CRITERIONTK, 0xa6)
#define rwID_2DOBJECTSTRING    MAKECHUNKID(rwVENDORID_CRITERIONTK, 0xa7)
#define rwID_2DANIMPLUGIN      MAKECHUNKID(rwVENDORID_CRITERIONTK, 0xa8)
#define rwID_2DANIM            MAKECHUNKID(rwVENDORID_CRITERIONTK, 0xa9)
#define rwID_2DKEYFRAME        MAKECHUNKID(rwVENDORID_CRITERIONTK, 0xb0)
#define rwID_2DMAESTRO         MAKECHUNKID(rwVENDORID_CRITERIONTK, 0xb1)
#define rwID_BARYCENTRIC       MAKECHUNKID(rwVENDORID_CRITERIONTK, 0xb2)
#define rwID_PITEXDICTIONARYTK MAKECHUNKID(rwVENDORID_CRITERIONTK, 0xb3)
#define rwID_TOCTOOLKIT        MAKECHUNKID(rwVENDORID_CRITERIONTK, 0xb4)
#define rwID_TPLTOOLKIT        MAKECHUNKID(rwVENDORID_CRITERIONTK, 0xb5)
#define rwID_ALTPIPETOOLKIT    MAKECHUNKID(rwVENDORID_CRITERIONTK, 0xb6)
#define rwID_ANIMTOOLKIT       MAKECHUNKID(rwVENDORID_CRITERIONTK, 0xb7)
#define rwID_SKINSPLITTOOKIT   MAKECHUNKID(rwVENDORID_CRITERIONTK, 0xb8)


