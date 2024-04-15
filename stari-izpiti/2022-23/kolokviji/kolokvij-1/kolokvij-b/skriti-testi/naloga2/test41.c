
#include <stdio.h>
#include <stdlib.h>
#include "naloga2.h"

char* NIZI[] = {
    "FbRSB5dA0KHtmkaDFKeHinhvT8h5YejFzINy7Qe8CTayXc0s6CcdeT7j2m3SfW303aQOUwq",
    "3NKcRyzlx4rrJRQ3UMHG4hRjyk847ZTdaRtGkVMXNN8fF3_r161qrbfs2RXNEVU883wmU",
    "bRCXcED1ZGeYDWFHewbH59c8nBhc3x9kzdTSyV0vAksmA",
    "f4l04pB4hTnhc39W5biuwiNFxjV1u",
    "iv4pDGxfDFYnHtco19ul8NxsQui3u6DIdPfxcFcs_f2Ukv4bPhsAoG5c1DtFsYyMY8KXHA9OTyx0Uw3r5vSCG0fOFk",
    "i5rUjYmzMTMu64CAkDSm7sb2Y5DcFrc_IbyPnREEiEF4T35sK0qN8R3Y_s685lsBiuGuI",
    "Yfht__2KDUQJODee4Pxa5pBKlPJ7IZN3VVo2loy",
    "zBfAf95ZFhJ0xaVpeeMd35P0uhsdTJpxQrIxCZ",
    "a0HzIwLDT801i0hl4EtxmXSbAsDrI0Vq9nM8LBrDB6ID6YzDns",
    "l5CZ5omc2bW7WR_pXL8J9ejuquIcYNnhs5ZlmCYzsqtuviNuzxQPaSPE",
    "a3AidNlGtDNF0ge_NKXspfO2pCJzloIRmO9lxW_BQvyHgZv9dVFdPUnjygIYVeHyXv1xfBpOWSdI7b9tFS01hxXr9BeDPfAbKs",
    "uoqORJaO1cr91kCcIpw5SGm_tZoJzCMtvoaymElTogbzRQGAOYtKDTLyG67SdpMXdHBzNzSu4qxR4xE3J4pmsXqbWg0S",
    "h8k3h_MDOA235PWuiBuGQKM8YXokUfHI5SJnRtrn",
    "ONq2QeOPlwQOj_QDKYw7y6wKl8SSbSyd8LsEsMte16OWOik3k9C2UzW",
    "mQ4awR51iDaVdDJv4ZciZ7Vm4QB46xqeYg",
    "DLQHmjbzk2UX4G",
    "zNjYO08tYQRoptLNf_n8dEANKxNioKotguwxKddrpPHhoL1dmkaq7SL2cy1X4SQ0mWqw8vIu3pJIQ95VTz",
    "cS_8xBwZAkKZVpS9KmBtAId2GZnn5i_8yk1YhjIqEh_UZDbcuatAZDu6SAkH8A7x4vKgCtv3Jo",
    "RI6k7KdtyXhnIt8DcAWM0fg",
    "vtFZR5sjXQfxBzaO8ODqasEwJB4M4f77GVKO6AcjJN18",
    "XNHRvs_cEYkwR6MSTEVlanFaExgEzcA8vDQ85tlDCXRYwaEYZnN11e2RWUCtXjSb7azf0O5hj9dDEW9MChRxppx",
    "1jt636mgCtkkIFiz1XBWilL5U3mVECixySW7CzoCDz9NganGldouwGWZwE",
    NULL
};

int main() {
    char** izhodni = naSredino(NIZI, 975);

    int stNizov = sizeof(NIZI) / sizeof(NIZI[0]) - 1;
    for (int i = 0; i < stNizov; i++) {
        printf("%d: \"%s\"\n", i, izhodni[i]);
        free(izhodni[i]);
    }
    printf("%s\n", (izhodni[stNizov] == NULL) ? ("NULL") : ("NAPAKA"));

    free(izhodni);
    return 0;
}
