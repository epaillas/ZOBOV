import numpy

class void_catalogue(object):
    """
    Void catalogue class
    """
    def __init__(self, data):
        self.data = numpy.genfromtxt(data, skip_header=2)
        self.nvoids = len(self.data)

    def plot_abundance(self, boxsize, npart, nbins=15):
        import pylab

        vol = self.data[:, -4] # In ZOBOV units
        vol *= (boxsize ** 3) / npart
        rad = ((3 * vol) / 4 * numpy.pi) ** (1./3)

        pylab.hist(rad, bins=nbins, histtype='step')
        pylab.xlabel('R [Mpc / h]')
        pylab.ylabel('N')
        pylab.show()
