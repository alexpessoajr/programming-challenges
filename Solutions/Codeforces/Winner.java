import java.util.*;

public class Winner {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        PriorityQueue<Player> queue = new PriorityQueue<>();
        Map<String, Player> players = new HashMap<>();

        for (int i = 0; i < n; i++) {
            String playerName = scanner.next();
            int playerScore = scanner.nextInt();

            Player currentPlayer = players.get(playerName);
            Round currentRound = new Round(i, playerScore);

            if (currentPlayer == null) {
                currentPlayer = new Player(playerName);
                players.put(playerName, currentPlayer);
            }
            currentPlayer.addRound(currentRound);
        }

        players.forEach((name, player) -> queue.add(player));

        System.out.println(queue.peek().getName());
    }
}

class Player implements Comparable<Player> {
    private String name;
    private int score;
    private List<Round> rounds;

    public Player(String name) {
        this.name = name;
        this.rounds = new ArrayList<>();
    }

    public String getName() {
        return name;
    }

    public void addRound(Round round) {
        this.score += round.getScore();
        this.rounds.add(round);
    }

    private int getFirstRoundWithAtLeast(int score) {
        int currentScore = 0;
        for (Round round : rounds) {
            currentScore += round.getScore();
            if (currentScore >= score) {
                return round.getId();
            }
        }
        throw new IllegalArgumentException();
    }

    @Override
    public int compareTo(Player player) {
        if (score != player.score) {
            return player.score - score;
        }
        return getFirstRoundWithAtLeast(score) - player.getFirstRoundWithAtLeast(score);
    }
}

class Round {
    private int id;
    private int score;

    public Round(int id, int score) {
        this.id = id;
        this.score = score;
    }

    public int getId() {
        return id;
    }

    public int getScore() {
        return score;
    }
}
