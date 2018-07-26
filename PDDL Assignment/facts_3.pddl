(define (problem move-robot)
	(:domain move-robot-3)
	(:objects
		cell1_1 - cell cell1_2 - cell cell1_3 - cell 
		cell2_1 - cell cell2_2 - cell cell2_3 - cell
		cell3_1 - cell cell3_2 - cell cell3_3 - cell
		cell4_1 - cell cell4_2 - cell cell4_3 - cell
		robot - thing shirt - thing laundry_bin - thing
		gripper_g - gripper
	)
	(:init
		(is-robot robot)
		(is-shirt shirt)
		(is-laundry-bin laundry_bin)

		(is-blocked cell1_3)
		(is-blocked cell2_1)
		(is-blocked cell2_2)
		(is-blocked cell4_3)

		(is-adjacent cell1_1 cell1_2)
		(is-adjacent cell1_2 cell1_3)
		(is-adjacent cell1_3 cell2_3)
		(is-adjacent cell2_3 cell3_3)
		(is-adjacent cell3_3 cell4_3)

		(thing-in-cell robot cell1_1)
		(thing-in-cell shirt cell1_3)
		(thing-in-cell laundry_bin cell4_3)

		(gripper-empty gripper_g)
		
	)
	(:goal (in-laundry-bin shirt laundry_bin
		)
	)
)
