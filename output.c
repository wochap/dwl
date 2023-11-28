#include <pixman.h>
#include <wlr/interfaces/wlr_output.h>

void wlr_output_damage_whole(struct wlr_output *output) {
	int width, height;
	pixman_region32_t damage;
	struct wlr_output_event_damage event;

	wlr_output_transformed_resolution(output, &width, &height);

	pixman_region32_init_rect(&damage, 0, 0, width, height);

	event = (struct wlr_output_event_damage){
		.output = output,
		.damage = &damage,
	};
	wl_signal_emit_mutable(&output->events.damage, &event);

	pixman_region32_fini(&damage);
}

