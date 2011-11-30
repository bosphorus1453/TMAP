#ifndef TMAP_BWT_AUX_H_
#define TMAP_BWT_AUX_H_
/*
 * This is to incorporate the BWT optimizations from Roel Kluin:
 * https://github.com/RoelKluin/bwa
 */

// TODO
inline uint64_t 
tmap_bwt_aux_occ_p(const tmap_bwt_int_t k, uint64_t x, const tmap_bwt_int_t *const p);

/*! 
  calculates the SA interval given the previous SA interval and the next base
  @param  bwt  pointer to the bwt structure 
  @param  k    previous lower occurrence
  @param  l    previous upper occurrence
  @param  c    base in two-bit integer format
  @param  ok   the next lower occurrence
  @param  ol   the next upper occurrence
  @details     more efficient version of bwt_occ but requires that k <= l (not checked)
  */
inline tmap_bwt_int_t 
tmap_bwt_aux_2occ(const tmap_bwt_t *bwt, tmap_bwt_int_t k, tmap_bwt_int_t *l, uint8_t c);

#endif