/**********************************************************************
 * 		crystal_basic.h					      *
 **********************************************************************/

#ifndef _FT_CRYSTAL_BASIC_H_
#define _FT_CRYSTAL_BASIC_H_


struct _STATE {
        double dens;                    /* Density */
        double pres;                    /* Pressure */
        double phi;                     /* Potential */
        double vel[MAXD];               /* Velocities */
        double vort;                    /* Vorticity */
        double vort3d[MAXD];            /* Vorticity in 3D */
	double impuse[MAXD];             /* Accum impact from external force */
        double solute;                  /* Solute concentration */
};
typedef struct _STATE STATE;

#endif
