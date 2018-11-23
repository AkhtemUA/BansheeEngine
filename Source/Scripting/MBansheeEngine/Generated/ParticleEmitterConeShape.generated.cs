using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

namespace BansheeEngine
{
	/** @addtogroup Particles
	 *  @{
	 */

	/// <summary>
	/// Particle emitter shape that emits particles from a cone. Particles can be created on cone base or volume, while 
	/// controling the radial arc of the emitted portion of the volume, as well as thickness of the cone emission volume. All 
	/// particles will have random normals within the distribution of the cone.
	/// </summary>
	public partial class ParticleEmitterConeShape : ParticleEmitterShape
	{
		private ParticleEmitterConeShape(bool __dummy0) { }
		protected ParticleEmitterConeShape() { }

		/// <summary>Options describing the shape.</summary>
		public ParticleConeShapeOptions Options
		{
			get
			{
				ParticleConeShapeOptions temp;
				Internal_getOptions(mCachedPtr, out temp);
				return temp;
			}
			set { Internal_setOptions(mCachedPtr, ref value); }
		}

		[MethodImpl(MethodImplOptions.InternalCall)]
		private static extern void Internal_setOptions(IntPtr thisPtr, ref ParticleConeShapeOptions options);
		[MethodImpl(MethodImplOptions.InternalCall)]
		private static extern void Internal_getOptions(IntPtr thisPtr, out ParticleConeShapeOptions __output);
	}

	/** @} */
}
