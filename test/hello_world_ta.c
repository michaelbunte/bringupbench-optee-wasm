typedef __builtin_va_list __gnuc_va_list;
typedef __gnuc_va_list va_list;
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;
typedef long int int64_t;
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long int uint64_t;
typedef int8_t int_least8_t;
typedef int16_t int_least16_t;
typedef int32_t int_least32_t;
typedef int64_t int_least64_t;
typedef uint8_t uint_least8_t;
typedef uint16_t uint_least16_t;
typedef uint32_t uint_least32_t;
typedef uint64_t uint_least64_t;
typedef int8_t int_fast8_t;
typedef int16_t int_fast16_t;
typedef int32_t int_fast32_t;
typedef int64_t int_fast64_t;
typedef uint8_t uint_fast8_t;
typedef uint16_t uint_fast16_t;
typedef uint32_t uint_fast32_t;
typedef uint64_t uint_fast64_t;
typedef long intptr_t;
typedef unsigned long uintptr_t;
typedef int64_t intmax_t;
typedef uint64_t uintmax_t;
typedef long int ptrdiff_t;
typedef long unsigned int size_t;
typedef int wchar_t;
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
} max_align_t;
typedef float float_t;
typedef double double_t;
void libtarg_success(void);
void libtarg_fail(int code);
void libtarg_putc(char c);
void *libtarg_sbrk(size_t inc);
long libmin_atol(const char *s);
int libmin_atoi(const char *s);
double libmin_atof(const char *s);
long libmin_strtol(const char *s, char **endptr, int base);
extern char *optarg;
extern int optind, opterr, optopt, optpos, optreset;
int libmin_getopt(int argc, char * const argv[], const char *optstring);
char *libmin_strcat(char *dest, const char *src);
char *libmin_strcpy(char *dest, const char *src);
char *libmin_strncpy(char *dst, const char *src, size_t n);
char *libmin_strncat(char *d, const char *s, size_t n);
size_t libmin_strlen(const char *str);
int libmin_strcmp(const char *l, const char *r);
int libmin_strncmp(const char *s1, const char *s2, register size_t n);
size_t libmin_strspn(const char *s, const char *c);
char *libmin_strtok(char *s, const char *sep);
char *libmin_strdup (const char *s);
char *libmin_strchr(const char *s, char c);
char *libmin_strrchr(const char *s, int c);
size_t libmin_strcspn(const char *s, const char *c);
char *libmin_strpbrk(const char *s, const char *b);
const char *libmin_strstr (const char *s1, const char *s2);
char *libmin_strcasestr(const char *h, const char *n);
int libmin_strncasecmp(const char *_l, const char *_r, size_t n);
void *libmin_memset(void *dest, int c, size_t n);
void *libmin_memcpy(void *dest, const void *src, size_t n);
int libmin_memcmp(const void *vl, const void *vr, size_t n);
void *libmin_memmove(void *dest, const void *src, size_t n);
int libmin_printf(char *fmt, ...);
int libmin_snprintf(char *s, size_t size, char *fmt, ...);
void libmin_putc(char c);
void libmin_puts(char *s);
int libmin_sscanf(const char *buf, const char *fmt, ...);
void libmin_success(void);
void libmin_fail(int code);
void libmin_srand(unsigned int seed);
unsigned int libmin_rand(void);
void *libmin_malloc(size_t size);
void *libmin_calloc(size_t m, size_t n);
void *libmin_realloc(void *block, size_t size);
void libmin_free(void * addr);
struct _MFILE {
  char *fname;
  size_t data_sz;
  const uint8_t *data;
  int rdptr;
};
typedef struct _MFILE MFILE;
void libmin_mopen(MFILE *mfile, const char *mode);
size_t libmin_msize(MFILE *mfile);
int libmin_meof(MFILE *mfile);
void libmin_mclose(MFILE *mfile);
size_t libmin_mread(void *ptr, size_t size, MFILE *mfile);
char *libmin_mgets(char *s, size_t size, MFILE *mfile);
int libmin_getline(char **s, size_t *n, MFILE *f);
int libmin_mgetc(MFILE *mfile);
typedef int (*cmpfun)(const void *, const void *);
void libmin_qsort(void *base, size_t nel, size_t width, cmpfun cmp);
extern unsigned short *_pctype;
int _isctype(int c, int mask);
static __inline unsigned __FLOAT_BITS(float __f)
{
 union {float __f; unsigned __i;} __u;
 __u.__f = __f;
 return __u.__i;
}
static __inline unsigned long long __DOUBLE_BITS(double __f)
{
 union {double __f; unsigned long long __i;} __u;
 __u.__f = __f;
 return __u.__i;
}
static __inline int __fpclassify(double x)
{
 union {double f; uint64_t i;} u = {x};
 int e = u.i>>52 & 0x7ff;
 if (!e) return u.i<<1 ? 3 : 2;
 if (e==0x7ff) return u.i<<12 ? 0 : 1;
 return 4;
}
double libmin_floor(double x);
double libmin_scalbn(double x, int n);
double libmin_cos(double x);
double libmin_sin(double x);
double libmin_fabs(double x);
float libmin_fabsf(float x);
double libmin_pow(double x, double y);
double libmin_sqrt(double x);
double libmin_exp(double x);
int libmin_abs(int i);
double libmin_acos(double x);
double libmin_asin(double x);
double libmin_atan2(double y, double x);
double libmin_atan(double x);
int __rem_pio2_large(double *x, double *y, int e0, int nx, int prec);
int __rem_pio2(double x, double *y);
uint32_t libmin_fnv32a(void *buf, size_t len, uint32_t hashval);
uint64_t libmin_fnv64a(void *buf, size_t len, uint64_t hashval);
typedef uint32_t TEE_Result;
typedef struct {
 uint32_t timeLow;
 uint16_t timeMid;
 uint16_t timeHiAndVersion;
 uint8_t clockSeqAndNode[8];
} TEE_UUID;
typedef struct {
 uint32_t login;
 TEE_UUID uuid;
} TEE_Identity;
typedef union {
 struct {
  void *buffer;
  size_t size;
 } memref;
 struct {
  uint32_t a;
  uint32_t b;
 } value;
} TEE_Param;
typedef union {
 struct {
  void *buffer;
  uint32_t size;
 } memref;
 struct {
  uint32_t a;
  uint32_t b;
 } value;
} __GP11_TEE_Param;
typedef struct __TEE_TASessionHandle *TEE_TASessionHandle;
typedef struct __TEE_PropSetHandle *TEE_PropSetHandle;
typedef struct __TEE_ObjectHandle *TEE_ObjectHandle;
typedef struct __TEE_ObjectEnumHandle *TEE_ObjectEnumHandle;
typedef struct __TEE_OperationHandle *TEE_OperationHandle;
typedef uint32_t TEE_ObjectType;
typedef struct {
 uint32_t objectType;
 uint32_t objectSize;
 uint32_t maxObjectSize;
 uint32_t objectUsage;
 size_t dataSize;
 size_t dataPosition;
 uint32_t handleFlags;
} TEE_ObjectInfo;
typedef struct {
 uint32_t objectType;
 __extension__ union {
  uint32_t keySize;
  uint32_t objectSize;
 };
 __extension__ union {
  uint32_t maxKeySize;
  uint32_t maxObjectSize;
 };
 uint32_t objectUsage;
 uint32_t dataSize;
 uint32_t dataPosition;
 uint32_t handleFlags;
} __GP11_TEE_ObjectInfo;
typedef uint32_t TEE_Whence;
typedef struct {
 uint32_t attributeID;
 union {
  struct {
   void *buffer;
   size_t length;
  } ref;
  struct {
   uint32_t a, b;
  } value;
 } content;
} TEE_Attribute;
typedef struct {
 uint32_t attributeID;
 union {
  struct {
   void *buffer;
   uint32_t length;
  } ref;
  struct {
   uint32_t a, b;
  } value;
 } content;
} __GP11_TEE_Attribute;
typedef uint32_t TEE_OperationMode;
typedef struct {
 uint32_t algorithm;
 uint32_t operationClass;
 uint32_t mode;
 uint32_t digestLength;
 uint32_t maxKeySize;
 uint32_t keySize;
 uint32_t requiredKeyUsage;
 uint32_t handleState;
} TEE_OperationInfo;
typedef struct {
 uint32_t keySize;
 uint32_t requiredKeyUsage;
} TEE_OperationInfoKey;
typedef struct {
 uint32_t algorithm;
 uint32_t operationClass;
 uint32_t mode;
 uint32_t digestLength;
 uint32_t maxKeySize;
 uint32_t handleState;
 uint32_t operationState;
 uint32_t numberOfKeys;
 TEE_OperationInfoKey keyInformation[];
} TEE_OperationInfoMultiple;
typedef struct {
 uint32_t seconds;
 uint32_t millis;
} TEE_Time;
typedef uint32_t TEE_BigInt;
typedef uint32_t TEE_BigIntFMM;
typedef uint32_t TEE_BigIntFMMContext __attribute__((aligned(__alignof__(void *))));
typedef struct __TEE_SEServiceHandle *TEE_SEServiceHandle;
typedef struct __TEE_SEReaderHandle *TEE_SEReaderHandle;
typedef struct __TEE_SESessionHandle *TEE_SESessionHandle;
typedef struct __TEE_SEChannelHandle *TEE_SEChannelHandle;
typedef struct {
 _Bool sePresent;
 _Bool teeOnly;
 _Bool selectResponseEnable;
} TEE_SEReaderProperties;
typedef struct {
 uint8_t *buffer;
 size_t bufferLen;
} TEE_SEAID;
typedef uint32_t TEE_ErrorOrigin;
typedef void *TEE_Session;
extern int trace_level;
extern const char trace_ext_prefix[];
void trace_ext_puts(const char *str);
int trace_ext_get_thread_id(void);
int trace_ext_get_core_id(void);
void trace_set_level(int level);
int trace_get_level(void);
void plat_trace_ext_puts(const char *str);
void trace_vprintf(const char *func, int line, int level, _Bool level_ok,
     const char *fmt, va_list args) __attribute__((format(printf, 5, 0)));
void trace_printf(const char *func, int line, int level, _Bool level_ok,
    const char *fmt, ...) __attribute__((format(printf, 5, 6)));
void dhex_dump(const char *function, int line, int level,
        const void *buf, int len);
TEE_Result TEE_GetPropertyAsString(TEE_PropSetHandle propsetOrEnumerator,
       const char *name, char *valueBuffer,
       size_t *valueBufferLen);
TEE_Result __GP11_TEE_GetPropertyAsString(TEE_PropSetHandle propsetOrEnumerator,
       const char *name, char *valueBuffer,
       uint32_t *valueBufferLen);
TEE_Result TEE_GetPropertyAsBool(TEE_PropSetHandle propsetOrEnumerator,
     const char *name, _Bool *value);
TEE_Result TEE_GetPropertyAsU32(TEE_PropSetHandle propsetOrEnumerator,
    const char *name, uint32_t *value);
TEE_Result TEE_GetPropertyAsU64(TEE_PropSetHandle propsetOrEnumerator,
    const char *name, uint64_t *value);
TEE_Result TEE_GetPropertyAsBinaryBlock(TEE_PropSetHandle propsetOrEnumerator,
     const char *name, void *valueBuffer,
     size_t *valueBufferLen);
TEE_Result
__GP11_TEE_GetPropertyAsBinaryBlock(TEE_PropSetHandle propsetOrEnumerator,
        const char *name, void *valueBuffer,
        uint32_t *valueBufferLen);
TEE_Result TEE_GetPropertyAsUUID(TEE_PropSetHandle propsetOrEnumerator,
     const char *name, TEE_UUID *value);
TEE_Result TEE_GetPropertyAsIdentity(TEE_PropSetHandle propsetOrEnumerator,
         const char *name, TEE_Identity *value);
TEE_Result TEE_AllocatePropertyEnumerator(TEE_PropSetHandle *enumerator);
void TEE_FreePropertyEnumerator(TEE_PropSetHandle enumerator);
void TEE_StartPropertyEnumerator(TEE_PropSetHandle enumerator,
     TEE_PropSetHandle propSet);
void TEE_ResetPropertyEnumerator(TEE_PropSetHandle enumerator);
TEE_Result TEE_GetPropertyName(TEE_PropSetHandle enumerator,
          void *nameBuffer, size_t *nameBufferLen);
TEE_Result __GP11_TEE_GetPropertyName(TEE_PropSetHandle enumerator,
          void *nameBuffer,
          uint32_t *nameBufferLen);
TEE_Result TEE_GetNextProperty(TEE_PropSetHandle enumerator);
void TEE_Panic(TEE_Result panicCode);
TEE_Result TEE_OpenTASession(const TEE_UUID *destination,
        uint32_t cancellationRequestTimeout,
        uint32_t paramTypes,
        TEE_Param params[4],
        TEE_TASessionHandle *session,
        uint32_t *returnOrigin);
TEE_Result __GP11_TEE_OpenTASession(const TEE_UUID *destination,
        uint32_t cancellationRequestTimeout,
        uint32_t paramTypes,
        __GP11_TEE_Param params[4],
        TEE_TASessionHandle *session,
        uint32_t *returnOrigin);
void TEE_CloseTASession(TEE_TASessionHandle session);
TEE_Result TEE_InvokeTACommand(TEE_TASessionHandle session,
          uint32_t cancellationRequestTimeout,
          uint32_t commandID, uint32_t paramTypes,
          TEE_Param params[4],
          uint32_t *returnOrigin);
TEE_Result __GP11_TEE_InvokeTACommand(TEE_TASessionHandle session,
          uint32_t cancellationRequestTimeout,
          uint32_t commandID, uint32_t paramTypes,
          __GP11_TEE_Param params[4],
          uint32_t *returnOrigin);
_Bool TEE_GetCancellationFlag(void);
_Bool TEE_UnmaskCancellation(void);
_Bool TEE_MaskCancellation(void);
TEE_Result TEE_CheckMemoryAccessRights(uint32_t accessFlags, void *buffer,
           size_t size);
TEE_Result __GP11_TEE_CheckMemoryAccessRights(uint32_t accessFlags,
           void *buffer, uint32_t size);
void TEE_SetInstanceData(const void *instanceData);
const void *TEE_GetInstanceData(void);
void *TEE_Malloc(size_t size, uint32_t hint);
void *__GP11_TEE_Malloc(uint32_t size, uint32_t hint);
void *TEE_Realloc(void *buffer, size_t newSize);
void *__GP11_TEE_Realloc(void *buffer, uint32_t newSize);
void TEE_Free(void *buffer);
void *TEE_MemMove(void *dest, const void *src, size_t size);
void *__GP11_TEE_MemMove(void *dest, const void *src, uint32_t size);
int32_t TEE_MemCompare(const void *buffer1, const void *buffer2, size_t size);
int32_t __GP11_TEE_MemCompare(const void *buffer1, const void *buffer2,
         uint32_t size);
void TEE_MemFill(void *buff, uint32_t x, size_t size);
void __GP11_TEE_MemFill(void *buff, uint32_t x, uint32_t size);
void TEE_GetObjectInfo(TEE_ObjectHandle object, TEE_ObjectInfo *objectInfo);
void __GP11_TEE_GetObjectInfo(TEE_ObjectHandle object,
         __GP11_TEE_ObjectInfo *objectInfo);
TEE_Result TEE_GetObjectInfo1(TEE_ObjectHandle object,
         TEE_ObjectInfo *objectInfo);
TEE_Result __GP11_TEE_GetObjectInfo1(TEE_ObjectHandle object,
         __GP11_TEE_ObjectInfo *objectInfo);
void TEE_RestrictObjectUsage(TEE_ObjectHandle object, uint32_t objectUsage);
TEE_Result TEE_RestrictObjectUsage1(TEE_ObjectHandle object,
        uint32_t objectUsage);
TEE_Result TEE_GetObjectBufferAttribute(TEE_ObjectHandle object,
     uint32_t attributeID, void *buffer,
     size_t *size);
TEE_Result __GP11_TEE_GetObjectBufferAttribute(TEE_ObjectHandle object,
            uint32_t attributeID,
            void *buffer, uint32_t *size);
TEE_Result TEE_GetObjectValueAttribute(TEE_ObjectHandle object,
           uint32_t attributeID, uint32_t *a,
           uint32_t *b);
void TEE_CloseObject(TEE_ObjectHandle object);
TEE_Result TEE_AllocateTransientObject(TEE_ObjectType objectType,
           uint32_t maxObjectSize,
           TEE_ObjectHandle *object);
TEE_Result __GP11_TEE_AllocateTransientObject(TEE_ObjectType objectType,
           uint32_t maxKeySize,
           TEE_ObjectHandle *object);
void TEE_FreeTransientObject(TEE_ObjectHandle object);
void TEE_ResetTransientObject(TEE_ObjectHandle object);
TEE_Result TEE_PopulateTransientObject(TEE_ObjectHandle object,
           const TEE_Attribute *attrs,
           uint32_t attrCount);
TEE_Result __GP11_TEE_PopulateTransientObject(TEE_ObjectHandle object,
           const __GP11_TEE_Attribute *attrs,
           uint32_t attrCount);
void TEE_InitRefAttribute(TEE_Attribute *attr, uint32_t attributeID,
     const void *buffer, size_t length);
void __GP11_TEE_InitRefAttribute(__GP11_TEE_Attribute *attr,
     uint32_t attributeID,
     const void *buffer, uint32_t length);
void TEE_InitValueAttribute(TEE_Attribute *attr, uint32_t attributeID,
       uint32_t a, uint32_t b);
void __GP11_TEE_InitValueAttribute(__GP11_TEE_Attribute *attr,
       uint32_t attributeID,
       uint32_t a, uint32_t b);
void TEE_CopyObjectAttributes(TEE_ObjectHandle destObject,
         TEE_ObjectHandle srcObject);
TEE_Result TEE_CopyObjectAttributes1(TEE_ObjectHandle destObject,
         TEE_ObjectHandle srcObject);
TEE_Result TEE_GenerateKey(TEE_ObjectHandle object, uint32_t keySize,
      const TEE_Attribute *params, uint32_t paramCount);
TEE_Result __GP11_TEE_GenerateKey(TEE_ObjectHandle object, uint32_t keySize,
      const __GP11_TEE_Attribute *params,
      uint32_t paramCount);
TEE_Result TEE_OpenPersistentObject(uint32_t storageID, const void *objectID,
        size_t objectIDLen, uint32_t flags,
        TEE_ObjectHandle *object);
TEE_Result __GP11_TEE_OpenPersistentObject(uint32_t storageID,
        const void *objectID,
        uint32_t objectIDLen, uint32_t flags,
        TEE_ObjectHandle *object);
TEE_Result TEE_CreatePersistentObject(uint32_t storageID, const void *objectID,
          size_t objectIDLen, uint32_t flags,
          TEE_ObjectHandle attributes,
          const void *initialData,
          size_t initialDataLen,
          TEE_ObjectHandle *object);
TEE_Result __GP11_TEE_CreatePersistentObject(uint32_t storageID,
          const void *objectID,
          uint32_t objectIDLen,
          uint32_t flags,
          TEE_ObjectHandle attributes,
          const void *initialData,
          uint32_t initialDataLen,
          TEE_ObjectHandle *object);
void TEE_CloseAndDeletePersistentObject(TEE_ObjectHandle object);
TEE_Result TEE_CloseAndDeletePersistentObject1(TEE_ObjectHandle object);
TEE_Result TEE_RenamePersistentObject(TEE_ObjectHandle object,
          const void *newObjectID,
          size_t newObjectIDLen);
TEE_Result __GP11_TEE_RenamePersistentObject(TEE_ObjectHandle object,
          const void *newObjectID,
          uint32_t newObjectIDLen);
TEE_Result TEE_AllocatePersistentObjectEnumerator(TEE_ObjectEnumHandle *
        objectEnumerator);
void TEE_FreePersistentObjectEnumerator(TEE_ObjectEnumHandle objectEnumerator);
void TEE_ResetPersistentObjectEnumerator(TEE_ObjectEnumHandle objectEnumerator);
TEE_Result TEE_StartPersistentObjectEnumerator(TEE_ObjectEnumHandle
            objectEnumerator,
            uint32_t storageID);
TEE_Result TEE_GetNextPersistentObject(TEE_ObjectEnumHandle objectEnumerator,
           TEE_ObjectInfo *objectInfo,
           void *objectID, size_t *objectIDLen);
TEE_Result
__GP11_TEE_GetNextPersistentObject(TEE_ObjectEnumHandle objectEnumerator,
       __GP11_TEE_ObjectInfo *objectInfo,
       void *objectID, uint32_t *objectIDLen);
TEE_Result TEE_ReadObjectData(TEE_ObjectHandle object, void *buffer,
         size_t size, size_t *count);
TEE_Result __GP11_TEE_ReadObjectData(TEE_ObjectHandle object, void *buffer,
         uint32_t size, uint32_t *count);
TEE_Result TEE_WriteObjectData(TEE_ObjectHandle object, const void *buffer,
          size_t size);
TEE_Result __GP11_TEE_WriteObjectData(TEE_ObjectHandle object,
          const void *buffer, uint32_t size);
TEE_Result TEE_TruncateObjectData(TEE_ObjectHandle object, size_t size);
TEE_Result __GP11_TEE_TruncateObjectData(TEE_ObjectHandle object,
      uint32_t size);
TEE_Result TEE_SeekObjectData(TEE_ObjectHandle object, intmax_t offset,
         TEE_Whence whence);
TEE_Result __GP11_TEE_SeekObjectData(TEE_ObjectHandle object, int32_t offset,
         TEE_Whence whence);
TEE_Result TEE_AllocateOperation(TEE_OperationHandle *operation,
     uint32_t algorithm, uint32_t mode,
     uint32_t maxKeySize);
void TEE_FreeOperation(TEE_OperationHandle operation);
void __GP11_TEE_FreeOperation(TEE_OperationHandle operation);
void TEE_GetOperationInfo(TEE_OperationHandle operation,
     TEE_OperationInfo *operationInfo);
TEE_Result
TEE_GetOperationInfoMultiple(TEE_OperationHandle operation,
        TEE_OperationInfoMultiple *operationInfoMultiple,
        size_t *operationSize);
TEE_Result
__GP11_TEE_GetOperationInfoMultiple(TEE_OperationHandle operation,
        TEE_OperationInfoMultiple *info,
        uint32_t *operationSize);
void TEE_ResetOperation(TEE_OperationHandle operation);
TEE_Result TEE_SetOperationKey(TEE_OperationHandle operation,
          TEE_ObjectHandle key);
TEE_Result __GP11_TEE_SetOperationKey(TEE_OperationHandle operation,
          TEE_ObjectHandle key);
TEE_Result TEE_SetOperationKey2(TEE_OperationHandle operation,
    TEE_ObjectHandle key1, TEE_ObjectHandle key2);
TEE_Result __GP11_TEE_SetOperationKey2(TEE_OperationHandle operation,
           TEE_ObjectHandle key1,
           TEE_ObjectHandle key2);
void TEE_CopyOperation(TEE_OperationHandle dstOperation,
         TEE_OperationHandle srcOperation);
TEE_Result TEE_IsAlgorithmSupported(uint32_t algId, uint32_t element);
void TEE_DigestUpdate(TEE_OperationHandle operation,
        const void *chunk, size_t chunkSize);
void __GP11_TEE_DigestUpdate(TEE_OperationHandle operation,
        const void *chunk, uint32_t chunkSize);
TEE_Result TEE_DigestDoFinal(TEE_OperationHandle operation, const void *chunk,
        size_t chunkLen, void *hash, size_t *hashLen);
TEE_Result __GP11_TEE_DigestDoFinal(TEE_OperationHandle operation,
        const void *chunk, uint32_t chunkLen,
        void *hash, uint32_t *hashLen);
TEE_Result TEE_DigestExtract(TEE_OperationHandle operation, void *hash,
        size_t *hashLen);
void TEE_CipherInit(TEE_OperationHandle operation, const void *IV,
      size_t IVLen);
void __GP11_TEE_CipherInit(TEE_OperationHandle operation, const void *IV,
      uint32_t IVLen);
TEE_Result TEE_CipherUpdate(TEE_OperationHandle operation, const void *srcData,
       size_t srcLen, void *destData, size_t *destLen);
TEE_Result __GP11_TEE_CipherUpdate(TEE_OperationHandle operation,
       const void *srcData, uint32_t srcLen,
       void *destData, uint32_t *destLen);
TEE_Result TEE_CipherDoFinal(TEE_OperationHandle operation,
        const void *srcData, size_t srcLen,
        void *destData, size_t *destLen);
TEE_Result __GP11_TEE_CipherDoFinal(TEE_OperationHandle operation,
        const void *srcData, uint32_t srcLen,
        void *destData, uint32_t *destLen);
void TEE_MACInit(TEE_OperationHandle operation, const void *IV,
   size_t IVLen);
void __GP11_TEE_MACInit(TEE_OperationHandle operation, const void *IV,
   uint32_t IVLen);
void TEE_MACUpdate(TEE_OperationHandle operation, const void *chunk,
     size_t chunkSize);
void __GP11_TEE_MACUpdate(TEE_OperationHandle operation, const void *chunk,
     uint32_t chunkSize);
TEE_Result TEE_MACComputeFinal(TEE_OperationHandle operation,
          const void *message, size_t messageLen,
          void *mac, size_t *macLen);
TEE_Result __GP11_TEE_MACComputeFinal(TEE_OperationHandle operation,
          const void *message, uint32_t messageLen,
          void *mac, uint32_t *macLen);
TEE_Result TEE_MACCompareFinal(TEE_OperationHandle operation,
          const void *message, size_t messageLen,
          const void *mac, size_t macLen);
TEE_Result __GP11_TEE_MACCompareFinal(TEE_OperationHandle operation,
          const void *message, uint32_t messageLen,
          const void *mac, uint32_t macLen);
TEE_Result TEE_AEInit(TEE_OperationHandle operation, const void *nonce,
        size_t nonceLen, uint32_t tagLen, size_t AADLen,
        size_t payloadLen);
TEE_Result __GP11_TEE_AEInit(TEE_OperationHandle operation, const void *nonce,
        uint32_t nonceLen, uint32_t tagLen,
        uint32_t AADLen, uint32_t payloadLen);
void TEE_AEUpdateAAD(TEE_OperationHandle operation, const void *AADdata,
       size_t AADdataLen);
void __GP11_TEE_AEUpdateAAD(TEE_OperationHandle operation, const void *AADdata,
       uint32_t AADdataLen);
TEE_Result TEE_AEUpdate(TEE_OperationHandle operation, const void *srcData,
   size_t srcLen, void *destData, size_t *destLen);
TEE_Result __GP11_TEE_AEUpdate(TEE_OperationHandle operation,
          const void *srcData, uint32_t srcLen,
          void *destData, uint32_t *destLen);
TEE_Result TEE_AEEncryptFinal(TEE_OperationHandle operation,
         const void *srcData, size_t srcLen,
         void *destData, size_t *destLen, void *tag,
         size_t *tagLen);
TEE_Result __GP11_TEE_AEEncryptFinal(TEE_OperationHandle operation,
         const void *srcData, uint32_t srcLen,
         void *destData, uint32_t *destLen,
         void *tag, uint32_t *tagLen);
TEE_Result TEE_AEDecryptFinal(TEE_OperationHandle operation,
         const void *srcData, size_t srcLen,
         void *destData, size_t *destLen, void *tag,
         size_t tagLen);
TEE_Result __GP11_TEE_AEDecryptFinal(TEE_OperationHandle operation,
         const void *srcData, uint32_t srcLen,
         void *destData, uint32_t *destLen,
         void *tag, uint32_t tagLen);
TEE_Result TEE_AsymmetricEncrypt(TEE_OperationHandle operation,
     const TEE_Attribute *params,
     uint32_t paramCount, const void *srcData,
     size_t srcLen, void *destData,
     size_t *destLen);
TEE_Result __GP11_TEE_AsymmetricEncrypt(TEE_OperationHandle operation,
     const __GP11_TEE_Attribute *params,
     uint32_t paramCount,
     const void *srcData, uint32_t srcLen,
     void *destData, uint32_t *destLen);
TEE_Result TEE_AsymmetricDecrypt(TEE_OperationHandle operation,
     const TEE_Attribute *params,
     uint32_t paramCount, const void *srcData,
     size_t srcLen, void *destData,
     size_t *destLen);
TEE_Result __GP11_TEE_AsymmetricDecrypt(TEE_OperationHandle operation,
     const __GP11_TEE_Attribute *params,
     uint32_t paramCount,
     const void *srcData, uint32_t srcLen,
     void *destData, uint32_t *destLen);
TEE_Result TEE_AsymmetricSignDigest(TEE_OperationHandle operation,
        const TEE_Attribute *params,
        uint32_t paramCount, const void *digest,
        size_t digestLen, void *signature,
        size_t *signatureLen);
TEE_Result __GP11_TEE_AsymmetricSignDigest(TEE_OperationHandle operation,
        const __GP11_TEE_Attribute *params,
        uint32_t paramCount,
        const void *digest,
        uint32_t digestLen, void *signature,
        uint32_t *signatureLen);
TEE_Result TEE_AsymmetricVerifyDigest(TEE_OperationHandle operation,
          const TEE_Attribute *params,
          uint32_t paramCount, const void *digest,
          size_t digestLen, const void *signature,
          size_t signatureLen);
TEE_Result __GP11_TEE_AsymmetricVerifyDigest(TEE_OperationHandle operation,
          const __GP11_TEE_Attribute *params,
          uint32_t paramCount,
          const void *digest,
          uint32_t digestLen,
          const void *signature,
          uint32_t signatureLen);
void TEE_DeriveKey(TEE_OperationHandle operation,
     const TEE_Attribute *params, uint32_t paramCount,
     TEE_ObjectHandle derivedKey);
void __GP11_TEE_DeriveKey(TEE_OperationHandle operation,
     const __GP11_TEE_Attribute *params,
     uint32_t paramCount, TEE_ObjectHandle derivedKey);
void TEE_GenerateRandom(void *randomBuffer, size_t randomBufferLen);
void __GP11_TEE_GenerateRandom(void *randomBuffer, uint32_t randomBufferLen);
void TEE_GetSystemTime(TEE_Time *time);
TEE_Result TEE_Wait(uint32_t timeout);
TEE_Result TEE_GetTAPersistentTime(TEE_Time *time);
TEE_Result TEE_SetTAPersistentTime(const TEE_Time *time);
void TEE_GetREETime(TEE_Time *time);
size_t TEE_BigIntFMMSizeInU32(size_t modulusSizeInBits);
uint32_t __GP11_TEE_BigIntFMMSizeInU32(uint32_t modulusSizeInBits);
size_t TEE_BigIntFMMContextSizeInU32(size_t modulusSizeInBits);
uint32_t __GP11_TEE_BigIntFMMContextSizeInU32(uint32_t modulusSizeInBits);
void TEE_BigIntInit(TEE_BigInt *bigInt, size_t len);
void __GP11_TEE_BigIntInit(TEE_BigInt *bigInt, uint32_t len);
void TEE_BigIntInitFMMContext(TEE_BigIntFMMContext *context, size_t len,
         const TEE_BigInt *modulus);
void __GP11_TEE_BigIntInitFMMContext(TEE_BigIntFMMContext *context,
         uint32_t len, const TEE_BigInt *modulus);
TEE_Result TEE_BigIntInitFMMContext1(TEE_BigIntFMMContext *context,
         size_t len, const TEE_BigInt *modulus);
void TEE_BigIntInitFMM(TEE_BigIntFMM *bigIntFMM, size_t len);
void __GP11_TEE_BigIntInitFMM(TEE_BigIntFMM *bigIntFMM, uint32_t len);
TEE_Result TEE_BigIntConvertFromOctetString(TEE_BigInt *dest,
         const uint8_t *buffer,
         size_t bufferLen,
         int32_t sign);
TEE_Result __GP11_TEE_BigIntConvertFromOctetString(TEE_BigInt *dest,
         const uint8_t *buffer,
         uint32_t bufferLen,
         int32_t sign);
TEE_Result TEE_BigIntConvertToOctetString(uint8_t *buffer, size_t *bufferLen,
       const TEE_BigInt *bigInt);
TEE_Result __GP11_TEE_BigIntConvertToOctetString(uint8_t *buffer,
       uint32_t *bufferLen,
       const TEE_BigInt *bigInt);
void TEE_BigIntConvertFromS32(TEE_BigInt *dest, int32_t shortVal);
TEE_Result TEE_BigIntConvertToS32(int32_t *dest, const TEE_BigInt *src);
int32_t TEE_BigIntCmp(const TEE_BigInt *op1, const TEE_BigInt *op2);
int32_t TEE_BigIntCmpS32(const TEE_BigInt *op, int32_t shortVal);
void TEE_BigIntShiftRight(TEE_BigInt *dest, const TEE_BigInt *op,
     size_t bits);
void __GP11_TEE_BigIntShiftRight(TEE_BigInt *dest, const TEE_BigInt *op,
     uint32_t bits);
_Bool TEE_BigIntGetBit(const TEE_BigInt *src, uint32_t bitIndex);
uint32_t TEE_BigIntGetBitCount(const TEE_BigInt *src);
TEE_Result TEE_BigIntSetBit(TEE_BigInt *op, uint32_t bitIndex, _Bool value);
TEE_Result TEE_BigIntAssign(TEE_BigInt *dest, const TEE_BigInt *src);
TEE_Result TEE_BigIntAbs(TEE_BigInt *dest, const TEE_BigInt *src);
void TEE_BigIntAdd(TEE_BigInt *dest, const TEE_BigInt *op1,
     const TEE_BigInt *op2);
void TEE_BigIntSub(TEE_BigInt *dest, const TEE_BigInt *op1,
     const TEE_BigInt *op2);
void TEE_BigIntNeg(TEE_BigInt *dest, const TEE_BigInt *op);
void TEE_BigIntMul(TEE_BigInt *dest, const TEE_BigInt *op1,
     const TEE_BigInt *op2);
void TEE_BigIntSquare(TEE_BigInt *dest, const TEE_BigInt *op);
void TEE_BigIntDiv(TEE_BigInt *dest_q, TEE_BigInt *dest_r,
     const TEE_BigInt *op1, const TEE_BigInt *op2);
void TEE_BigIntMod(TEE_BigInt *dest, const TEE_BigInt *op,
     const TEE_BigInt *n);
void TEE_BigIntAddMod(TEE_BigInt *dest, const TEE_BigInt *op1,
        const TEE_BigInt *op2, const TEE_BigInt *n);
void TEE_BigIntSubMod(TEE_BigInt *dest, const TEE_BigInt *op1,
        const TEE_BigInt *op2, const TEE_BigInt *n);
void TEE_BigIntMulMod(TEE_BigInt *dest, const TEE_BigInt *op1,
        const TEE_BigInt *op2, const TEE_BigInt *n);
void TEE_BigIntSquareMod(TEE_BigInt *dest, const TEE_BigInt *op,
    const TEE_BigInt *n);
void TEE_BigIntInvMod(TEE_BigInt *dest, const TEE_BigInt *op,
        const TEE_BigInt *n);
TEE_Result TEE_BigIntExpMod(TEE_BigInt *dest, const TEE_BigInt *op1,
       const TEE_BigInt *op2, const TEE_BigInt *n,
       const TEE_BigIntFMMContext *context);
_Bool TEE_BigIntRelativePrime(const TEE_BigInt *op1, const TEE_BigInt *op2);
void TEE_BigIntComputeExtendedGcd(TEE_BigInt *gcd, TEE_BigInt *u,
      TEE_BigInt *v, const TEE_BigInt *op1,
      const TEE_BigInt *op2);
int32_t TEE_BigIntIsProbablePrime(const TEE_BigInt *op,
      uint32_t confidenceLevel);
void TEE_BigIntConvertToFMM(TEE_BigIntFMM *dest, const TEE_BigInt *src,
       const TEE_BigInt *n,
       const TEE_BigIntFMMContext *context);
void TEE_BigIntConvertFromFMM(TEE_BigInt *dest, const TEE_BigIntFMM *src,
         const TEE_BigInt *n,
         const TEE_BigIntFMMContext *context);
void TEE_BigIntFMMConvertToBigInt(TEE_BigInt *dest, const TEE_BigIntFMM *src,
      const TEE_BigInt *n,
      const TEE_BigIntFMMContext *context);
void TEE_BigIntComputeFMM(TEE_BigIntFMM *dest, const TEE_BigIntFMM *op1,
     const TEE_BigIntFMM *op2, const TEE_BigInt *n,
     const TEE_BigIntFMMContext *context);
TEE_Result TA_CreateEntryPoint(void);
void TA_DestroyEntryPoint(void);
TEE_Result TA_OpenSessionEntryPoint(uint32_t paramTypes,
           TEE_Param params[4],
           void **sessionContext);
TEE_Result
__GP11_TA_OpenSessionEntryPoint(uint32_t paramTypes,
    __GP11_TEE_Param params[4],
    void **sessionContext);
void TA_CloseSessionEntryPoint(void *sessionContext);
TEE_Result
TA_InvokeCommandEntryPoint(void *sessionContext, uint32_t commandID,
      uint32_t paramTypes,
      TEE_Param params[4]);
TEE_Result
__GP11_TA_InvokeCommandEntryPoint(void *sessionContext, uint32_t commandID,
      uint32_t paramTypes,
      __GP11_TEE_Param params[4]);
TEE_Result __ta_open_sess(uint32_t pt, TEE_Param params[4],
     void **sess_ctx,
     TEE_Result (*fp)(uint32_t,
        __GP11_TEE_Param [4],
        void **));
TEE_Result __ta_invoke_cmd(void *sess_ctx, uint32_t cmd_id, uint32_t pt,
      TEE_Param params[4],
      TEE_Result (*fp)(void *, uint32_t, uint32_t,
         __GP11_TEE_Param [4]));
typedef struct _FILE FILE;
int printf(const char *fmt, ...)
                    __attribute__ ((__format__ (__printf__, 1, 2)));
int sprintf(char *str, const char *fmt, ...)
                    __attribute__ ((__format__ (__printf__, 2, 3)))
                    __attribute__ ((deprecated));
int snprintf(char *str, size_t size, const char *fmt, ...)
                    __attribute__ ((__format__ (__printf__, 3, 4)));
int vsnprintf (char *str, size_t size, const char *fmt, va_list ap)
                    __attribute__ ((__format__ (__printf__, 3, 0)));
int __sprintf_chk(char *str, int flag, size_t slen, const char *fmt, ...)
                    __attribute__ ((__format__ (__printf__, 4, 5)));
int puts(const char *str);
int putchar(int c);
extern FILE *stdout;
extern FILE *stderr;
int fputc(int c, FILE *stream);
int fputs(const char *s, FILE *stream);
size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream);
void tee_user_mem_mark_heap(void);
size_t tee_user_mem_check_heap(void);
TEE_Result TEE_CacheClean(char *buf, size_t len);
TEE_Result TEE_CacheFlush(char *buf, size_t len);
TEE_Result TEE_CacheInvalidate(char *buf, size_t len);
void *tee_map_zi(size_t len, uint32_t flags);
TEE_Result tee_unmap(void *buf, size_t len);
TEE_Result tee_uuid_from_str(TEE_UUID *uuid, const char *s);
TEE_Result tee_invoke_supp_plugin(const TEE_UUID *uuid, uint32_t cmd,
      uint32_t sub_cmd, void *buf, size_t len,
      size_t *outlen);
TEE_Result TA_CreateEntryPoint(void)
{
 trace_printf(__func__, 14, (3), (1), "has been called");
 return 0x00000000;
}
void TA_DestroyEntryPoint(void)
{
 trace_printf(__func__, 25, (3), (1), "has been called");
}
TEE_Result TA_OpenSessionEntryPoint(uint32_t param_types,
  TEE_Param __attribute__((unused)) params[4],
  void __attribute__((unused)) **sess_ctx)
{
 uint32_t exp_param_types = ((0) | ((0) << 4) | ((0) << 8) | ((0) << 12));
 trace_printf(__func__, 43, (3), (1), "has been called");
 if (param_types != exp_param_types)
  return 0xFFFF0006;
 (void)&params;
 (void)&sess_ctx;
 trace_printf(__func__, 56, (2), (1), "Hello World!\n");
 return 0x00000000;
}
void TA_CloseSessionEntryPoint(void __attribute__((unused)) *sess_ctx)
{
 (void)&sess_ctx;
 trace_printf(__func__, 69, (2), (1), "Goodbye!\n");
}
static TEE_Result inc_value(uint32_t param_types,
 TEE_Param params[4])
{
 uint32_t exp_param_types = ((3) | ((0) << 4) | ((0) << 8) | ((0) << 12));
 trace_printf(__func__, 80, (3), (1), "has been called");
 if (param_types != exp_param_types)
  return 0xFFFF0006;
 trace_printf(__func__, 85, (2), (1), "Got value: %u from NW", params[0].value.a);
 params[0].value.a++;
 trace_printf(__func__, 87, (2), (1), "Increase value to: %u", params[0].value.a);
 return 0x00000000;
}
static TEE_Result dec_value(uint32_t param_types,
 TEE_Param params[4])
{
 uint32_t exp_param_types = ((3) | ((0) << 4) | ((0) << 8) | ((0) << 12));
 trace_printf(__func__, 100, (3), (1), "has been called");
 if (param_types != exp_param_types)
  return 0xFFFF0006;
 trace_printf(__func__, 105, (2), (1), "Got value: %u from NW", params[0].value.a);
 params[0].value.a--;
 trace_printf(__func__, 107, (2), (1), "Decrease value to: %u", params[0].value.a);
 return 0x00000000;
}
TEE_Result TA_InvokeCommandEntryPoint(void __attribute__((unused)) *sess_ctx,
   uint32_t cmd_id,
   uint32_t param_types, TEE_Param params[4])
{
 (void)&sess_ctx;
 switch (cmd_id) {
 case 0:
  return inc_value(param_types, params);
 case 1:
  return dec_value(param_types, params);
 default:
  return 0xFFFF0006;
 }
}
static unsigned a[0xFFFF][0x10];
static unsigned depth;
static unsigned max_depth;
unsigned
ack(unsigned x, unsigned y)
{
 depth++;
 if (depth > 0xffFFFF)
  {
  libmin_printf("Maximum stack depth %d exceeded. Abort.\n", 0xffFFFF);
  libmin_fail(1);
 }
 if (x >= 0xFFFF)
  {
  libmin_printf("Maximum x value %d exceeded. Abort. \n", 0xFFFF);
  libmin_fail(1);
 }
 if (y >= 0x10)
  {
  libmin_printf("Maximum y value %d exceeded. Abort. \n", 0x10);
  libmin_fail(1);
 }
 if (a[x][y])
    return a[x][y];
 if (y==0)
    return a[x][0] = x+1;
 if (x==0)
    return a[0][y] = ack(1,y-1);
  return a[x][y] = ack(ack(x-1,y),y-1);
}
TEE_Result TA_InvokeCommandEntryPoint(void __attribute__((unused)) *sess_ctx, uint32_t cmd_id, uint32_t param_types, TEE_Param params[4]) {
 (void)&sess_ctx;
 unsigned y,k;
 max_depth = 0;
 for(k=0;k<=5;k++)
 {
  libmin_printf("\nx+y=%d:\n\n",k);
  for(y=0;y<=k;y++)
  {
   depth = 0;
   libmin_printf("A(%d,%d) = %d\n",k-y,y,ack(k-y,y));
   if (depth > max_depth)
    max_depth = depth;
  }
 }
 libmin_printf("Max recursive depth = %u\n", max_depth);
 libmin_success();
 return 0x00000000;
}
