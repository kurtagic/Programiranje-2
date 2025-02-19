
#include <stdio.h>
#include <stdlib.h>
#include "naloga2.h"

char* NIZI[] = {
    "UKxlEEiUf2DBt9f",
    "1Nko0CQEKI2JpWuLL17khWel5AT84dg3D8oZI07aNcZ9",
    "4ddPaZCZiYr5N2V2yJTV_NqYn",
    "0PrqQ_3g",
    "nLrgMuBThKf9v9DV_03Yr4DqPH59D0Y4OY5l6wRz4pAO0z62HrtcOuQZSXZH9Y5VxSdR_",
    "dZTH8BMeJGwo6yIdbEajCS1ZOsACYWZvqlqfd_Rxga9NhgwerppXpsKw0g7x6Gzmk9kyIbcEo2G65i",
    "7LIKI50QJiDAVKnfPmuDOq79GVxS4KWzBY9fDQZMiIM2BI9QLeaN7Cb",
    "rqqN6wvI6XSNu9VXkv9hpfSDGBzQGUy5Ie8XedOr858FEp_LI7ybK4huskRL_jMmCGuNXAug8goSoQpdb47eT342TyLVOoXT",
    "K_GTd",
    "9EVgmYRvirLZYQcL4lw3548w5gua3FOF",
    "akkuOxFWVAYE16CZ",
    "4WWTpKUo93fvrcmX",
    "sHvLVWjnAfM3g",
    "v1zZzu9UqyeYxQ5Do83NJzKgkN65WFkkkiDkWh4eG5Oaz8iff_EeyM_d5VQxVpf4mhStdOnI8opu_4Dlm",
    "0VzzNylQrCXFn6mHuZimz21r2GmNOPGowDmI4gK_52kzdsIT3J1FFSKCV670VVuPEJGDEHX",
    "OOkWSa1P5zf3KSI3irzZhxzsnOZCLLnR9UFuMES0iQ_WxnlqyyNK6g5CwVdqZOF5_zdY2JgVyiissX",
    "urgyPLE",
    "gKgj64Fkc0EClU1995YLmkaIuaQTY3A2Gz",
    "1Trdz5t_tA3jRXbbfq02Nf5F5nJjaHZBU1Sg7O_sxkF7274Pypjzb_dChM0GqfHc4UGboZqoPuuaupmLrkGTq2S8Elcw",
    "cVcm2Nk4L7hn8EXCRnJozMoZFpGnk7NtDAIcbjwNuNazW0koz9thYNTjVh8xUckX3xRo6LoX8anhxJSVk",
    "NuSs_BlROi2RehgGoD8SzO90WjDb6_ipMuPDQ6hgHtvvPP0gBaqxEX7vXHPI6qFzyTm9s1RjRjLcG2xeoIGSwE05LjVMKnP_uXM",
    "Tzu7w1lSE6RELZ6gA9_uto6GSLVEX5zMJoQD616BfHuUefoQNqYLN_w2TgIoCNE",
    "XfwYG1nOSFKJJSlKbplCvJZ_h26Jpow14qwJ4D26SPdXGE",
    "ZzoI7wR7UCkyykB",
    "vAMkmjdXvOMlDlwKWFEutXkdff3",
    "k1sTF2snR37KQB7sMlH5aAPRVDoY1atXp6XtzAJZze2",
    "s5YlYg3DlQzJa0YEGEmgRLB2bYEj5MtxIG4ov",
    "YBLz0T2BCYbViRjsOhg70kg5IkO9mqu3PioJrw9d86bOr0A2Me8UxArSACvZLxVaVDq",
    "LF8mVsNWeqldHpojmHHTw8PzazkHS_xCi_Ajqjd1Y",
    "60JJuH57RCWRPN0_1_iFOaaw4z35gNCI",
    "CdBHnGQN0CMqT11uPKIwNOLdJBdb7U2oxW7EqArdnHLCb",
    "kqSJEG44dwp5JVAKh6s7AbQlwmigdNBwcEEcnSZ55SdgRF2QO6ryXt0_XK1TNHc832VEWswtQ5NU",
    "nQqvmJsZlxMLSsEe3HdjH9mJjMWFjEa0DxRV6ZDZPlja_EvK73x8LmAsBnXwRaXJfMANvdeD8d6lOXqMu9LrcrJ",
    "wXghQiskFpiIurAWCVqRV55MGGDpBzQ1l5sGwEvp2dEwjI65R45BGR2qk8QQngD1Qm6mpkOeV7bmYzoNURvsdM86",
    "h7PbXk7C0ZvTY2tvil4SuRUP_M1Tp9CZSOJeYoJ9HsAFRlCile7u7qXIBTV10PJr2oM51U6Qil",
    "neKt8_geaKCHFpVN7qbQ6DXkedpcd59Dr7FaiOG2KHJQp7RbBrYT0hrtxhagnvM2_KKyRb93nNS7Ql0_zTegAs",
    "hdlTwc7hnvAcNyQj_KKt0TwGGo41P0vo0yn0m6_gxRbAO5uJe0CklH1OC2D8",
    "M8H23_fntzSu3F5831gUkgTyBgbbB6ikMu4",
    "_DU79kDNpT1J7Hn",
    "rOqGk6dK5Kr6V6Wkr1lpSEWiSsN1fl0RkxgcdSQryNERHYs16n6KaQ6aM63FiBI8EYJ2J4o2KNByUKZWTxtfhf0WDr",
    "R4r7Np7ph4r5kYcPobIIPPNbdiFRT4QrAt",
    "lggZ",
    "kUwh7J1qLFeyGcXfWnSOt2FpBP1KEUZRSIKpGHXeRpUQ7UK",
    "aGn7oX4Icy8GrIOVNxDMLOS1lGjigkyJs2_rjQ_f8DnuK8JVdgBBzXUhUY7o0ylXGqUNM3uKlk",
    "Z54rCDbWdQgzJ06qVBAFzZP67Xu0pnOXC2oxaAyrgOvUFsEN__3XGqQIXWob4mDApKziWW3NfK8RfcTFp3DNyqrN7HzUnwD1M",
    "QbIHoj6dfQIXbarzrDE7t3G",
    "p0g3i9iSBytm4M6ZTzw2crr9XyEGZB_th8qL9_ToOQxz_2NvUYeM5VLCH1UVKyvE01Vm5d6ZLAoAYnu47",
    "xapXltvc1MIIhxREyhRwKoES0AemngdM4M0n0AojsKmOp7H01WpElpaC",
    "U1sqcet0NCSH1YcnDQlwbOYTfPEqeWgeh",
    "06tMFJRvDAeYL9u73GklIyM9XNQj1ikZSNVsv815dc1gP8WcX",
    "9fwFi2Hkm_Tdq7klLw0rKjWouT8XXq92mKyJQrL0HV0RsouLs7Kbm6JtGmuM6RH9VGpnEVe6Kp",
    "bIQIkdUfgMhaM6GeruyuoEERJlhJxvLbCyVejVuAMfK6iLtwogCE_IAYZ4qI2yJgbHhrFNksxPFGplpTtFchuncBG21BIjx2",
    "pc78mpCTxZCa_YplLtt4Bb1acHz64AVZaG",
    "gHkGQGC9WwYEZhVkmpe8zfYAizRGIvnmfddPcFkzbjfym11iKHDSlu6zJx4BygMo0SVumC8ki",
    "tzSRyAjLpMrbyXj44XXmfEmcqL1QLF7gwsrP559fR7mTlPZQdLD5rF4C872IIxBfNdFor3jl2FGiPVhr8D1U0eZDtiqTYUd2zl9F",
    "rJdlhyASKWVR0K5AQalRI9cp6L46dxUELEc3AVjiwY2owM8v_vtF5BxAqDH6g1o8sMwilQd",
    NULL
};

int main() {
    char** izhodni = naSredino(NIZI, 650);

    int stNizov = sizeof(NIZI) / sizeof(NIZI[0]) - 1;
    for (int i = 0; i < stNizov; i++) {
        printf("%d: \"%s\"\n", i, izhodni[i]);
        free(izhodni[i]);
    }
    printf("%s\n", (izhodni[stNizov] == NULL) ? ("NULL") : ("NAPAKA"));

    free(izhodni);
    return 0;
}
