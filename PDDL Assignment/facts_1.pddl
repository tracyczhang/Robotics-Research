(define (problem move-robot)
	(:domain move-robot-1)
	(:objects
		cell1_1 - cell
		cell2_1 - cell
		cell3_1 - cell
		robot - robot
	)
	(:init
		(is-adjacent cell1_1 cell2_1)
		(is-adjacent cell2_1 cell3_1)
		(robot-in-cell robot cell1_1)
	)
	(:goal (robot-in-cell robot cell3_1)
	)
)
