
#include <stdio.h>
#include <stdlib.h>
#include "naloga2.h"

char* NIZI[] = {
    "wGEWr7oJZmAuqMa4bpxLkwrvvSMmzDPvNpDgAOWTqdOx_gHcjR1l",
    "tmvw83sQswBHg",
    "0UgGoT5nqDyhrdSknf0xcFrVJOTQTbGyj6V0P5VtkAAkm7UorFI83",
    "JK3ruVDlcyDYOpeNDgmwQo1c1bFxmrBlRjWOPLX0pCVVgZBbFpFs_0CewBk9D1KzV2UV8YnjVbiPHFe3hbH3_kUVArb",
    "aOlMBi4sqVD7V9bz9XIUY8Jr9XAmpSE27OUnIyn6sYYi9vFumg1Y5S3az",
    "dze8HvV1SY2kJN1mBnweQrDHzpo_N260KNS8jL4My1S43nDU5xlsxzN2YkemSacyFBSwh4fFgYoxJW33JNlKYOEW3uzz4w0edS7",
    "_zdKLcB0znOIi",
    "OfPkJ",
    "clUPeGA2iJ7UPfdCVni78QfhZjlXo7pTeGPoQI0qkvwk0t",
    "LIzRpdInPbyj8oczWJ4",
    "hNvEwq6",
    "11AwZ1tWW176bgqTJuDv_VtcWgRfjy8fnKVyHUIvWyy58T9zZTItWwAIDROwlsCwf5XF",
    "LYfAYg0Z6cmydQgjonVo61PyF7BxeyChIaURz09QnQfopCQer49sfDo1",
    "JHiu7NGmpTgXRhJicp22ZhDtX1bIShZgdsrsHo8RL0jrDDn3gK4XWLPQ8hBris6KRXD0ZvjTEYo0MdFSGxSDj5s9i",
    "2x89YuhmOdW8puMe0uSqGj7SSXrTN8TUmEJGibynd0x8_",
    "6egiWuhVfOxlQVzx54eiSSwc6uwgOiAnirDIMhX9s6XQkxopbys2VipQt0HRdMN5dvzKn1jV84d4t05iuDTWEVQPeHXKu",
    "xw6PxmLmNDs9uYniPlf8lgkKiZmLSARsEL8Uv_EPLjwrxnrrqYs4",
    "8If6rtefUOyvrY2ZDFPaXHohy_uUbRuP9muY5Rw6GmnPH15aRIlFtI3rZ6UsuBeoXJku5Y0bQwHDEBC4BJ4eR3kG73z",
    "b6DCcT6k1Y3T7UNSqocts4sJiWcVw5yhZ_sLYh4EvJjnQ1o4iKw1h5vVqe3eL8gL26I9uRK0j2BNaqaH_9vfHqyHvG",
    "9UsWCA1Ymkz6dbTtHjnW_V86_0m8n_eVU",
    "pD_IhBBqnYssZrCu7Fah2gs0PPgz4RvReK9VOuqPJF0OR_IqmdL8YWFsZAJMoyLhZSk1uuISUBdl9oSoOiTEiQd",
    "dWDeuvVjZ",
    "Vr5MO0hVoStCswYvKc0othp",
    "v98iDyF5K0wySQOu",
    "C9TFUeot_0gDReOqlA8gQWVkEvD_HosT0UICDP",
    "huSk45lhwjQtyN",
    "MaEPGXFOAJXH7lvzHlWzBSM3N3z0zlHLyWAaqfxJx",
    "RECTmYK2BKoVuNhZeIUrbxSW9kmRnTfI6juicX0j",
    "4Sv2KWdf4i_yfHQwA18dyL",
    "LA",
    "_iS1T0x9xA9d7z6kL_JPooAPJdLygleFXShIWwne7euNYtSQNATajnsnNdFPEz4GXpKlf",
    "Zn6rF8xtqQiWQrMN6dyKihR8ZQya2D8cDH",
    "DnBLdXIUw6iIk3ENiosg2LLSkyOZe4cqpuOz7iYrxUYipcT",
    "Os0GZrklQkIYoKIga6FIo7CBRbYGYO",
    "4sXWbT9iHaG32SKdlxffzMSZyMdj99W3t2M3JmJeHo40P7myaot9AeOoCWhh",
    "vh6NpUlfcErBDsEORDtF9qGd9CuNn4jjSJm4K__oIsNDdAbzWELw",
    "hrMGRAh1OXgzSd1KKP6eg2QfhPtCnvAZSbAXpus2PgjUxmAxM8jjnfr",
    "azEohpBT",
    "B5ioOd2lXUrc",
    "Y8fyQS9mRPJmY8D1RKiQttmRyBCxCvQl2cGlZbDRxnslzFZ0nnE87nte26JiOPSs9A8I0k",
    "BSNYZeILQF8IWpCDUSk9qcN8_0OETgrPsBlr1EBMAG1p",
    "8UIa9TSXt34GwAVbA9TBKMOoDeAJ2YdOV3qaRY_gcZUmrKxqY1puJUq0Mq3ospnxV",
    "qlCE4OWFMLw35qOLqe5xT27YIegkS0RJzZQEOtY9M83Dre0wvde9qEW0n3W9IWTgdbV",
    "eLDumO5jqm_Gq_v76e0CRf5yS2AwtXZ",
    "X1gJyXxJi_4jMWsKfv77KNGjp6tixOhtLyCQbTOt1cmMXbEccGM2pwrTHR1TVqVrgK8T",
    "wCF6jzMaNHWaPL",
    "qdDaAigb4fn2afibLFWhKwyVBS06iekDwxCDNak5ud",
    "gw4iBeG7hc3VxyqbuDY7RmUTw7Y_QxTtJbrgwxJsOsM5r87XwU",
    "bFQMhXG8fwNfSMwuI5CwDFIuOnS4FzmYxl1rC5ROBaez2PZJ9NcYgpwn4kcYS",
    "bhEqO2CQv855dcKsSqDRhgYVMuPpe38JQXYunj5vuos3s5EmiMTtG9CqjGNLc9HA29w30V",
    "Nyr9cSWcuMPs870RwG9Xd_du5MmnvhP0A6X8MqPRbWoidQIaX06INiQSxn6HmoZH_pNxGaGbhi2BjS1UuSQyvS",
    "OUPeFQoEgkswXbgTsNp3UEwmGErB7ZLzdnNSFAdirbzGX2aACEzazQzm49NzzlQp1EDtNBk6",
    "HJ70qiVz_9QOmhJ2rhMPMDXOtL9q_XsrgciimemQBBTwVqf0PwXdakxZhxcsy0BrI5CVjPP8WB",
    "a5MCWNYLDyD",
    "RR8LBiLRhhsdJ0AtJ7y1wFFcq4t8mjAhSk_Sfa",
    "8NrDntoapdyV7gN73p65bzxu8Zdvo1KgdOcss8Dhxi5MtTrphtSfD9nT9DAqAnLl2vQBUIU00jQhydsLQHOD1YsPoA5G",
    "Segs76rpcakxyhYiOdsKZ5bC6_0pu7hyLUVfeS8A4SDtmvlT61dkafDSz54nTQfQDhN9F_WDCsnbQbiB_2Zh0I5",
    "JVDAGljXI0p0xZESLKRxoY40focz7pCKFSfvzMIeKVJmrD4UzUsgqToR6",
    "cypbv1doTZlvrV7Lf1E6wmiMEKbthKTDTmU1CgtBQIXj",
    "EmD5MyV2purjHy5f5uMFvlrtF4Zfu",
    "InjJwv_hBizMPyt5AHsi3hswKlxCGm3fWKuBmM1NMAgISf4LT",
    "LxRNzCE5EhHEtPAX_ayJTFVPeeAWPE5xyld304rX2F13penDS7vNYXgLFCPNmUeTEG5kzkGMEWnXi8hR",
    "A0XXJicqpTur2fTuslg2VrHzXGwHejYcrL2ZJgm1PAmn5z45qYOOmuKrlZp2D1tORZp7EuObm8Dsza5xAzMeRR",
    "EtPMBI00LGEK2ilmAuSWDUgldkBD16z12g10rudABGR53sA9lFHZoVhQN71a4Ws",
    "dFBchfD2TDjr07dqv5YetEqhVL1J",
    "pALhRoxJ2ReBBsIBntzJDWxS9",
    "AEJ7q3TJqhjJa11P68LzsLOaZdg4dsUnA9IklQRRqfMkzgTnCvz02qrevWr5vnBo1i71V1FdZ0DjZhOyt9m39VoL",
    "AxzirSAHO3w4TNa800Yf2t_4K1LOoFyZqedG8M0V9j6igyToOtc8bmZM0",
    "H5pXTLX2fACk",
    "u7jKG2Xq49x3uysUTJkTy5QJP5AEGgIFI5SzRcbzOBcQwFLpk3jrEoQivDtP6H5JY5pp_GIR",
    "DFGRBzjxSOc9Qscm0tUMdaWR5JUpb4oCwt30qRyLLRifSdbh1fNDtGZyCSyvi4S_wY7W4GqjPhfMB",
    "7DEK7E8A9uZmcNh_osJeeeyTVfU04K5Yg843MZLllrTw3t3bk",
    "Tr_4HZeErZqv9l0MdpL37HtvWavKHx8EsvvVS8LCa45Fx4w1MJL1CbQv9ixM0oxnX_KdBA6iotC_RnLHpFdl9",
    "RXsgfLuw6tCrbsojERePimiAB_FGNKOjD3cUel2g_vtygHypIDplZng13Bi",
    "nzZVCIFzLTY0nLXW0p52ZXvWZ5jPOmoyPCuZa3b7H3PNRy5mxyjBhbOrIwK4QNhcWplmwqhfCMciT8qBBZ8kvJByxMzlrVL",
    "O3i4r2dI3XBMuFPnvoiEgPP2XoKeSO2WJw895jB4HtI",
    "FxvVLOcqsyw6_ifEno8yADi3llpn4Y",
    "H6dcHdYeFeWWHI3",
    "n55HNOvG0khhumky1rHvuJDEnGIZfBkQ2Du2MYldCDMQIs5BgO_q5Q38MpyEliqB1RPZEZmPC_oMQ9vklgRZ",
    "E6cPQRFp1WfpyF8rydTf_M6EuXdxVfMyltv_5Duz4TQmqc8o1zv4mH5XKtzvPtgxjeAWmw9lZIycukqahgJzS",
    "IAo_7ntZZoaSc_ujL0lLoxK0EZ79XFjiFGUUXK4S2ipt0fhiVoOfGbQErMJqE8PZy",
    "ijVn2BWH_BnGP0FzQCJmTjrz1ltXO77iw2l9tdPndYsh4HJuwlBLND94o_75dANdlkkiMB",
    "IWu4vavm2LHSVUEsM6Fcl30LDv2TLa8t8NWdDbq6uJ1JWkHBSu0R3uNiTqw7D7QBDCfLm60I7G",
    "j6Uj51YwoYNtR4Fiv536w4_L3WP3vLBanOTYTanqrhDVVBXwxtpSDPB9geWFOK",
    "E8SBBDWiqOXMbO1jYPiEH8PQpHs3IAgm2VLOan26UfBXPSBtL0rU37cHxDxMEB88gLKhuRN",
    NULL
};

int main() {
    char** izhodni = naSredino(NIZI, 725);

    int stNizov = sizeof(NIZI) / sizeof(NIZI[0]) - 1;
    for (int i = 0; i < stNizov; i++) {
        printf("%d: \"%s\"\n", i, izhodni[i]);
        free(izhodni[i]);
    }
    printf("%s\n", (izhodni[stNizov] == NULL) ? ("NULL") : ("NAPAKA"));

    free(izhodni);
    return 0;
}
