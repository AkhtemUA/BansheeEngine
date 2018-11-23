using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

namespace BansheeEngine
{
	/** @addtogroup Particles
	 *  @{
	 */

	/// <summary>
	/// Particle emitter shape that emits particles from a circle. Using the thickness parameter you can control whether to 
	/// emit only from circle edge, the entire surface or just a part of the surface. Using the arc parameter you can emit 
	/// from a specific angular portion of the circle.
	/// </summary>
	public partial class ParticleEmitterCircleShape : ParticleEmitterShape
	{
		private ParticleEmitterCircleShape(bool __dummy0) { }
		protected ParticleEmitterCircleShape() { }

		/// <summary>Options describing the shape.</summary>
		public ParticleCircleShapeOptions Options
		{
			get
			{
				ParticleCircleShapeOptions temp;
				Internal_getOptions(mCachedPtr, out temp);
				return temp;
			}
			set { Internal_setOptions(mCachedPtr, ref value); }
		}

		[MethodImpl(MethodImplOptions.InternalCall)]
		private static extern void Internal_setOptions(IntPtr thisPtr, ref ParticleCircleShapeOptions options);
		[MethodImpl(MethodImplOptions.InternalCall)]
		private static extern void Internal_getOptions(IntPtr thisPtr, out ParticleCircleShapeOptions __output);
	}

	/** @} */
}
