(define (problem move-robot)
	(:domain move-robot-2)
	(:objects 
		cell1_1 - cell cell1_2 - cell
	 	cell1_3 - cell cell2_3 - cell
	 	cell2_1 - cell cell2_2 - cell
	 	cell3_1 - cell cell3_2 - cell
		cell3_3 - cell robot - robot
	)
	(:init
		(is-blocked cell2_1)
		(is-blocked cell2_2)

		(is-adjacent cell1_1 cell1_2)
		(is-adjacent cell1_2 cell1_3)
		(is-adjacent cell1_3 cell2_3)
		(is-adjacent cell2_3 cell3_3)
		(is-adjacent cell3_3 cell3_2)
		(is-adjacent cell3_2 cell3_1)
		(is-adjacent cell1_1 cell2_1)
		(is-adjacent cell1_2 cell2_2)
		(is-adjacent cell2_3 cell2_2)
		(is-adjacent cell3_2 cell2_2)
		(is-adjacent cell3_1 cell2_1)
		(is-adjacent cell2_1 cell2_2)

		(robot-in-cell robot cell1_1)
	)
	(:goal (robot-in-cell robot cell3_1)
	)
)
