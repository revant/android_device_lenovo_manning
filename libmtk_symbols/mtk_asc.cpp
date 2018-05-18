#include <stdint.h>
#include <log/log.h>
#include <dlfcn.h>

extern "C" {
    void _ZN7android14SurfaceControl8setLayerEj(uint32_t layer) {
        static void (*func)(uint32_t) = NULL;

        ALOGI("_ZN7android14SurfaceControl8setLayerEj: begin ...\n");
        ALOGI("_ZN7android14SurfaceControl8setLayerEj(layer = %d)\n", layer);
        func = (void (*)(uint32_t layer))dlsym(RTLD_NEXT, "_ZN7android14SurfaceControl8setLayerEjNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE");

        ALOGI("_ZN7android14SurfaceControl8setLayerEjNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE [0x%08X]\n",func);

        func(layer);
        ALOGI("_ZN7android14SurfaceControl8setLayerEj: end ...\n");
    }


    void _ZN7android14SurfaceControl8setLayerEi(int32_t layer){
        _ZN7android14SurfaceControl8setLayerEj(static_cast<uint32_t>(layer));
    }
}